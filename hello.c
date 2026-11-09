#include <stdio.h>
#include <cs50.h>
int main (void){

   int y = get_int("how many operations do you wanna do? ");
   for(int i = 0; i < y; i++)
   {
   float one = get_float(""); char op = get_char (""); float two = get_float("");

   if (op == 'x') 
   {
      float result = one * two;
      printf("%f\n",result);
   }
   else if (op == '+')
   {
      float result = one + two; 
      printf("%f\n",result);
   }
   else if (op == '-')
   {
      float result = one - two; 
      printf("%f\n",result);
   }
   else if (op == ':')
   {
      float result = one / two; 
      printf("%f\n",result);
   }
   else 
   {
      printf("That ain't an operation\n");
     
   }

   
}
}