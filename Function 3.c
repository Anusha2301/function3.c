#include<stdio.h>
int main() 
{
 int Num1,Num2,max_value;
 Printf("Enter two integer values");
 Scanf("%d%d",&Num1,&Num2);
 max_value = (Num1>Num2)? Num1: Num2;
 While(1)
 {
   if( max_value % Num1==0 && max_value % Num2==0)
  {
    Printf("Lcm of %d and %d  is %d", Num1, Num2, max_value);
    Break;
}
 ++max_value;
}
 return 0;
}
