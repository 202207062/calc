#include "dive.h"

int dive(int x, int y)
{
	int t = 0;
	for (t = 0; x>=y; t++)
	{
		x = dive(x, y);
	}
	return t;
}
