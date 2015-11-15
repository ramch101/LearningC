/* If we define the fibonacci number with a int datatype we get negative values
 * after the max length of 32 bits. If we need to overcome the issue we define with a unsigned long long int data type to resolve the issue
 * */

# include <stdio.h>
int main ( void) {
unsigned long long int n, first = 0, second = 1, next, c;
    
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%llu\n",next);
   }
 
   return 0;
}
