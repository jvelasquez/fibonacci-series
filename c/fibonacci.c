/* Fibonacci Series c language */
#include<stdio.h>

int fibonacci(int x)
{
   if ( x < 0 ) return - 1;
   if ( x == 0 || x == 1 ) return 1;
   return fibonacci(x - 1) + fibonacci(x - 2);
}
 
int main(int argc, char *argv[])
{

   // initial check, argument has to be only one!
   if (argc != 2) return 127;

   //TODO check if the argument is a valid number >= 0   

   int n, first = 0, second = 1, next, c;

   n = atoi(argv[1]);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   // adding ineficiency with the recursive function
   for ( c = 0 ; c < n ; c++ )
   {
      next = fibonacci(c);
      printf("%d\n",next);
   }
 
   return 0;
}
