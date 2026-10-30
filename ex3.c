#include <Stdio.h>
int main()
{
  int a,b,choice,res;
  printf("=====BRANCHING STATEMENTS=====\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU-----\n");
  printf("1. Check positive, Negative or zero\n");
  printf("2. Check Even or Odd\n");
  printf("3. Find Largest of Two Numbers\n");
  printf("4. Check Divisibility by 5\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  printf("\n-----RESULT-----\n");
  switch(choice)
    {
      case 1:
        if(a>0)
          printf("%d is Positive",a);
        else if(a<0)
          printf("%d is Negative",a);
        else
          printf("%d is Zero",a);
        break;
      case 2:
        if(a%2==0)
           printf("%d is odd",a);
        break;
      case 3:
         if(a>b)
         {
           res=a;
           printf("%d is the largest number",res);
         }
         else if(b>a)
         {
         res=b;
         printf("%d is the largest number ",res);
         }
         else
         {
            printf("both numbers are equal");
         }
         break;
      case 4:
         if(a%5==0)
            printf("%d is divisible by 5",a);
         else
            printf("%d is not divisible by 5",a);
         break;
      default:
          printf("invalid choice.");
          }
       return 0;
      }
//OUTPUT
//======BRANCHING STATEMENTS======
//enter the first number:25
//enter the second number:18
//------MENU-------
//1.check positive,negative or zero
//2.check even or odd
//3.find largest of two numbers
//4.check divisibility by 5
//enter your choice:3
//------RESULT------
//25 is the largest number
