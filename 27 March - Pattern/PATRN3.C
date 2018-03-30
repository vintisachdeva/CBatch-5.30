/*
	A             row = 1, 5 , column = 1,5
	AB
	ABC         column
	ABCD
	ABCDE


	EEEEE
	DDDD
	CCC
	BB
	A

*/

void main(){

       char row, column;
       clrscr();
       printf("\n");
       for(row = 'E'; row>='A'; row--)  // 'D'>='A'
       {                                  // 'A'>='D'
		for(column = 'A'; column<=row; column++) // 1<=5
		{
			printf("%c", row);  //*****
				//      *********
		}
		printf("\n");
       }
       getch();
}