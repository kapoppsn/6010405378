#include <stdio.h>
void main()
{
	int amount,one,five,twenty,fifty;
	printf("Enter an amount: ");
	scanf("%d",&amount);
	fifty = amount/50;
	twenty = (amount-(fifty*50))/20;
	five = (amount-(fifty*50+twenty*20))/5;
	one = amount-(fifty*50+twenty*20+five*5);
	printf("1: %d",one);
	printf("\n5: %d",five);
	printf("\n20: %d",twenty);
	printf("\n50: %d",fifty);
}