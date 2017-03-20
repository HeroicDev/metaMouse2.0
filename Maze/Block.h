//#ifndef _BLOCK_H_
//#define _BLOCK_H_

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
};