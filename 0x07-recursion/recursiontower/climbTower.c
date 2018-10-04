#include <stdio.h>
#include "holberton.h"

/**
* climbTower - tries to illustrate a recursive flow
* @x: the floor
*/

int climbTower(int x)
{
	int coins, floor, chairs, treasure;

	floor = x;
	if (x % 2 == 0) /* This just sets each floor with a chair */
		chairs = 1;
	else
		chairs = 0;
		printf("We just climbed a floor and found a coin\n");
		printf("On floor %i, we noticed there were %i chair(s)\n",floor, chairs);
/**--------------------------------------------------------*/
	if (floor == 4)
	{
		printf("This won't run until we are at the treasure room\n\n");
		printf("We find the treasure room and grab some treasure. We now want to go back down.\n");
		treasure = x;
		return (treasure); /* We are returning treasure and it will be stored in treasure GO TO line 36*/
	}
	else
	{
	printf("We are currently on floor %i with %i coins\nAfter checking if its the treasure room, and we were not, we continue climbing up.\n\nv-------------------------------v\n", floor, x);

/** This is where recursion occurs~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
		treasure = climbTower(x + 1); /* This is where we grabbed the treasure on floor 4 */
		
		printf("We just went down to floor %i carrying %i\n", floor, treasure);
		printf("On floor %i, we still see that there is %i chair(s)\n",floor, chairs);
		return (treasure); /* in the end we are returning treasure all the way up */
	}

	printf("This won't run hahahhahahahahaha");
	return (x);
}
/*
Things to note
* Chairs are created to show that we are going back to the same floor. 
* Each time we go back down to the previous floor, we are continuing off from when we went climbed it
	So after we store our coins we continue and print "We just went down floor %i..."
	Then we go back down to the previous floor returning treasure and storing it.. and repeat until we are at the top
* When we climb a floor we call dungeon(x + 1) We are basically incrementing x (climbing one more floor)
	When we find the treasure room, we can't just jump down to the bottom floor, we have to climb down each
	floor to the top
* comparing this to SQRT, We used recursion until we found the sqrt, or in our case we found the treasure room.
* Once we found the sqrt we returned it (carried the treasure down each floor) to the previous call.
*/


