// without using third variable

void main(){
      int first, second;
      clrscr();

      printf("\nEnter your first value = ");
      scanf("%d", &first);

      printf("\nEnter your second value = ");
      scanf("%d", &second);

     // first = 10, second = 20

      first = first + second;	// 10 + 20 = first = 30
      second = first - second;  // 30 - 20 = second = 10
      first = first - second;  //  30 - 10 = first = 20

      printf("First value = %d", first);
      printf("\nSecond value = %d", second);

      getch();
}