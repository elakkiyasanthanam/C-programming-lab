#i

nclude<stdio.h>
int main()
{
  int a,b,res,choice;
  printf("=====BITWISE OPERATIONS=====\n");
  printf("Enter the first number:");
  scanf("%d",&a);
  printf("Enter the second number:");
  scanf("%d",&b);
  printf("\n-----MENU----\n");
  printf("1.Bitwise AND (&)\n");
  printf("2.Bitwise OR (|)\n");
  printf("3.Bitwise XOR (^)\n");
  printf("4.Bitwise NOT (~)\n");
  printf("5.Leftshift (<<)\n");
  printf("6.Rightshift (>>)\n");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
      res=a&b;
      printf("Bitwise AND Result=%d",res);
      break;
    case 2:
      res=a|b;
      printf("Bitwise OR Result=%d",res);
      break;
    case 3:
      res=a^b;
      printf("Bitwise XOR Result=%d",res);
      break;
    case 4:
      res=~a;
      printf("Bitwise NOT Result=%d",res);
      break;
    case 5;
      res=a<<b;
      printf("Leftshift Result=%d",res);
      break;
    case 6;
      res=a>>b;
      printf("Rightshift Result=%d",res);
      break;  
    default;
      printf("Invalid choice.");
  }  
    return o;
}

//OUTPUT
//=====BITWISE OPERATIONS=====
//Enter the first number:12
//Enter the second number:5
//-----MENU-----
//1. Bitwise AND (&)
//2. Bitwise OR (|)
//3. Bitwise XOR (^)
//4. Bitwise NOT (~)
//5. Left shift (<<)
//6. Right shift (>>)
//Enter your choice:1
//Bitwise AND Result=4