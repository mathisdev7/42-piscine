/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:55:02 by mazeghou          #+#    #+#             */
/*   Updated: 2024/07/31 10:57:57 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define OP_END          0
#define OP_INC_DP       1
#define OP_DEC_DP       2
#define OP_INC_VAL      3
#define OP_DEC_VAL      4
#define OP_OUT          5
#define OP_IN           6
#define OP_JMP_FWD      7
#define OP_JMP_BCK      8

#define SUCCESS         0
#define FAILURE         1

#define PROGRAM_SIZE    4096
#define STACK_SIZE      512
#define DATA_SIZE       65535

#define STACK_PUSH(A)   (STACK[SP++] = A)
#define STACK_POP()     (STACK[--SP])
#define STACK_EMPTY()   (SP == 0)
#define STACK_FULL()    (SP == STACK_SIZE)

struct instruction_t {
    unsigned short operator;
    unsigned short operand;
};

static struct instruction_t PROGRAM[PROGRAM_SIZE];
static unsigned short STACK[STACK_SIZE];
static unsigned int SP = 0;

int compile_bf(FILE* fp) {
    unsigned short pc;
	unsigned short jmp_pc;
    int c;

	pc = 0;
	jmp_pc = 0;
    while ((c = getc(fp)) != EOF && pc < PROGRAM_SIZE) {
        if (c == '>')
            PROGRAM[pc].operator = OP_INC_DP;
		else if (c == '<')
            PROGRAM[pc].operator = OP_DEC_DP;
        else if (c == '+')
            PROGRAM[pc].operator = OP_INC_VAL;
        else if (c == '-')
            PROGRAM[pc].operator = OP_DEC_VAL;
        else if (c == '.')
            PROGRAM[pc].operator = OP_OUT;
        else if (c == ',')
            PROGRAM[pc].operator = OP_IN;
        else if (c == '[')
		{
            PROGRAM[pc].operator = OP_JMP_FWD;
            if (STACK_FULL())
                return FAILURE;
            STACK_PUSH(pc);
        }
		else if (c == ']')
		{
            if (STACK_EMPTY())
                return FAILURE;
            jmp_pc = STACK_POP();
            PROGRAM[pc].operator = OP_JMP_BCK;
            PROGRAM[pc].operand = jmp_pc;
            PROGRAM[jmp_pc].operand = pc;
        } 
		else
            pc--;
        pc++;
    }
    if (!STACK_EMPTY() || pc == PROGRAM_SIZE)
        return FAILURE;
    PROGRAM[pc].operator = OP_END;
    return SUCCESS;
}


int execute_bf() {
    unsigned short data[DATA_SIZE] = {0};
	unsigned short pc = 0;
    unsigned int ptr = 0;

    while (PROGRAM[pc].operator != OP_END && ptr < DATA_SIZE)
	{
        if (PROGRAM[pc].operator == OP_INC_DP)
            ptr++;
		else if (PROGRAM[pc].operator == OP_DEC_DP)
            ptr--;
		else if (PROGRAM[pc].operator == OP_INC_VAL)
            data[ptr]++;
		else if (PROGRAM[pc].operator == OP_DEC_VAL)
            data[ptr]--;
		else if (PROGRAM[pc].operator == OP_OUT)
            putchar(data[ptr]);
		else if (PROGRAM[pc].operator == OP_IN)
            data[ptr] = (unsigned int)getchar();
		else if (PROGRAM[pc].operator == OP_JMP_FWD)
		{
            if (!data[ptr])
                pc = PROGRAM[pc].operand;
        } 
		else if (PROGRAM[pc].operator == OP_JMP_BCK)
		{
            if (data[ptr]) {
                pc = PROGRAM[pc].operand;
            }
        }
		else
            return FAILURE;
        pc++;
    }
    return ptr != DATA_SIZE ? SUCCESS : FAILURE;
}


int main(void)
{
    int status;
    FILE *fp;
    if ((fp = fopen("./code.txt", "r")) == NULL) {
        return FAILURE;
    }
    status = compile_bf(fp);
    fclose(fp);
    if (status == SUCCESS) {
        status = execute_bf();
    }
    if (status == FAILURE) {
        fprintf(stderr, "Error\n");
    }
    return status;
}
