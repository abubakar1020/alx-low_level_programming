#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating keygen
 *
 * Return:0
 */
int main(void)
{
	int rk = 0;
	int check = 0;

	time_t;
	int t;

	srand((unsigned int) time(&t));

	while (check < 1500)
	{
		rk = rand() % 64;
		if ((checker + rk) > 1500)
			break;
		checker += rk;
		printf("%checker", rk);
	}
	print("%checker\n", (1500 - checker));
	return (0);
}
