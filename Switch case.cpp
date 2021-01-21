#include <stdio.h>
#include <conio.h>

 int main()
{
	int x;
	printf("                 MISHRA'S RESTAURANT");
	printf("\n1. Sandwich");
	printf("\n2. Samosa");
	printf("\n3. Panner Chilli");
	printf("\n4. Pasta");
	printf("\n5. Pizza");
	printf("\nEnter the number of food item you want to eat:");
	scanf("%d",&x);
	switch(x)
	{
		case 1: 
		printf("Food Item: Sandwich");
		printf("\n Price: Rs.80");
		break;
		case 2:
		printf("Food Item: Samosa");
		printf("\nPrice: Rs.50");
		break;
		case 3:
		printf("Food Item: Paneer Chilli");
		printf("\nPrice: Rs.200");
		break;
		case 4:
		printf("Food Item: Pasta");
		printf("\nPrice: Rs.180");
		break;
		case 5:
		printf("Food Item: Pizza");
		printf("\nPrice: Rs.350");
		break;
		default:
		printf("Sorry!! We don't have the food item you want.");
	}
	    printf("\nPlease dont waste your food just Enjoy it!");
	    printf("\n                THANK YOU!!!");
        getch();
        return 0;;
}
