void main(){

	int marks;
	clrscr();
	printf("\nEnter your marks = ");
	scanf("%d", &marks);

	if(marks>90)
		printf("A+ grade");
	else if(marks>80 && marks<90)
		printf("A grade");
	else if(marks>70 && marks<80)
		printf("B grade");
	else if(marks>60 && marks<70)
		printf("C grade");
	else
		printf("D grade");
	getch();

}