#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
   int num, x, i=0;
   srand(time(0));
   num = rand()%100 + 1;
   printf("The number is %d\n", num);

   // //Using goto-

   // printf("Guess a number between 1 and 100?\n");
   // scanf("%d", &x);
   // guess:
   // if(x<num)
   //    {printf("Your guess is less than the origin number. Try again\n");
   //    scanf("%d", &x);
   //    i++;
   //    goto guess;}
   // else if (x>num)
   //    {printf("Your guess is more than the origin number. Try again\n");
   //    scanf("%d", &x);
   //    i++;
   //    goto guess;}
   // else
   //   { printf("You guessed it right!!\n");
   //   i++;
   //   printf("Number of attempts = %d\nWell played!!", i);
   //   }

//    //Using for loop- 

// printf("Guess a number between 1 and 100?\n");
// scanf("%d", &x);
//    for (i=1; ; i++)
// {
//    if(x<num)
//       {printf("Your guess is less than the origin number. Try again\n");
//       scanf("%d", &x);
//       }
//    else if (x>num)
//       {printf("Your guess is more than the origin number. Try again\n");
//       scanf("%d", &x);
//       }
//    else
//      { printf("You guessed it right!!\n");
//      printf("Number of attempts = %d\nWell played!!", i);
//      break;
//      }
// }
     
//    return 0;
// }

//Using do-while-

do
{
   i++;
   printf("Guess a number between 1 and 100\n");
   scanf("%d", &x);
   {
   if(x>num)
   printf("Guess lower\n");
   else if(x<num)
   printf("Guess higher\n");
   else
   printf("You guessed it in %d attempts.", i);
   }
}
while(x!=num);
return 0;
}
