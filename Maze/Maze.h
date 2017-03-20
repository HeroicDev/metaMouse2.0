#ifndef _MAZE_H_
#define _MAZE_H_

#include "Block.h"
#include "Stack.h"

#define NORTH 1
#define SOUTH 2
#define EAST 3
#define WEST 4

/*
struct Block
{
	int x = 0;
	int y = 0;
	int weight = -1;
	bool visited = false; //same as weight
	bool northWall = false;
	bool southWall = false;
	bool eastWall = false;
	bool westWall = false;
};*/

//Global variables
extern Block currentBlock;
extern bool doneMapping;

//functions
void createTestMaze();
void initializeMaze();

void makeMove();
void moveForward();
int calculateCenter(int x, int y);
int calculateWeight(int x, int y, int desiredX, int desitedY);
void printMaze();

void floodFill(int sX, int sY);
int decideMove(Block block);

#endif






