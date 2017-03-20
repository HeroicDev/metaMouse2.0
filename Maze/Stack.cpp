#include "Stack.h"

Block pop()
{
	Block b = stack[stackPos];
	stackPos--;
	return b;
}

void push(Block b)
{
	stackPos++;
	stack[stackPos] = b;
}