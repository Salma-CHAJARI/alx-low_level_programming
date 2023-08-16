#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcore
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int i, bef1, bef2, aft1, aft2;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int L = 1000000000;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / L);
	bef2 = (bef % L);
	aft1 = (aft / L);
	aft2 = (aft % L);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / L));
		printf("%lu", aft2 % L);
		aft1 += bef1;
		bef1 = aft1 - bef1;
		aft2 += bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
