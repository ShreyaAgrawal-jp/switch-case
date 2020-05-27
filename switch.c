#include<stdio.h>
int main()
{
int n;
	printf("enter a no. (1-5): ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("food item: pizza\nprice: Rs239");
			break;
		case 2:
			printf("food item: garlic bread\nprice: Rs139");
			break;
		case 3:
			printf("food item: sandwitch\nprice: 149");
			break;
		case 4:
			printf("food item: pasta\nprice: 179");
			break;
		case 5:
			printf("food item: french fries\nprice: 99");
			break;
		default: 
			printf("invalid option");
	}
}
