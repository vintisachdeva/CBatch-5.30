/*
	1             row = 1, 5 , column = 1,5
	12
	123         column
	1234
	12345

	1
	22
	333
	4444
	55555

*/

void main(){

       int row, column;
       clrscr();
       printf("\n");
       for(row = 1; row<=5; row++)  // 2<=5
       {
		for(column = 1; column<=row; column++) // 1<=5
		{
			printf("%d", row);  //*****
				//      *********
		}
		printf("\n");
       }
       getch();
}