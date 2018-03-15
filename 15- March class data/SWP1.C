// swap two values with third variable

// user input --> swap --> third variable

#include<stdio.h>
#include<conio.h>
void main(){

	int first, second, third;
	clrscr();

	printf("\nEnter your first value = ");
	scanf("%d",&first);

	printf("\nEnter your second value = ");
	scanf("%d",&second);

	// first =10, second = 20

	third = first;	//    first = 10, third = 10
	first = second;  // first = 20, second = 20
	second = third;     //   second = 10

	printf("First value = %d", first);
	printf("\nSecond value = %d",second);

	getch();

}