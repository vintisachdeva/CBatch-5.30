/*
  *****   row = 1,5
  *****   column = 1, 5
  *****
  *****
  *****


*/


void main(){

       int row, column;
       clrscr();
       printf("\n");
       for(row = 1; row<=5; row++)  // 2<=5
       {
		for(column = 1; column<=5; column++) // 1<=5
		{
			printf("*");  //*****
				//      *********
		}
		printf("\n");
       }
       getch();
}




