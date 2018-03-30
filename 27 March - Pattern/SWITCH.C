// check vowel or consonant
#include<string.h>

void main(){
      char userChoice;
      clrscr();

      printf("\nEnter a character = ");
      scanf("%c",&userChoice);  // a --> 97
     // tolower(uservalue); --> capital letter--> convert into smaller letters	--> Predefined function --> string.h

     printf("\nLower letter = %c",tolower(userChoice)); //A
     printf("\nUpper letter = %c", toupper(userChoice));


      switch(tolower(userChoice)){     // A --> a --> userChoice

	  case 'a': // char --> ASCII  code --> (97 == 97) char --> display
	  //case 'A':
	  case 'e':
	  case 'E':
	  case 'i':
	  case 'o':
	  case 'u':
		printf("Vowel");
		break;//break;

	  default:
		printf("Consonant");
		break;


      } // switch terminate




      //
     /* if(userChoice == 'a' || userChoice == 'e' || userChoice == 'i' ||
	userChoice == 'o' || userChoice  == 'o')
	{
		printf("\nVowel");
	} else{
		printf("\nConsonant");
		printf("\nTerminate the program");
	 }*/

	 getch();
}