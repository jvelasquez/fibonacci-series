/* Fibonacci Series c language */
#include<stdio.h>

int main(int argc, char *argv[])
{

   // initial check, argument has to be only one!
   if (argc != 2) return 127;

   //TODO check if the argument is a valid number >= 0   

   unsigned long first = 0, second = 1, next, c;
   int n;

   n = atoi(argv[1]);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   // adding ineficiency with the recursive function
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 ) next = c;
      else 
      {
         next = first + second;
         first = second;
         second = next;
         // if the previous is greater than the next one abort
         if ( first > second )
         {
            printf("ERROR: Overflow\n");
            return 127;
         }
      }
      printf("%lu\n",next);
   }

   return 0;
}
