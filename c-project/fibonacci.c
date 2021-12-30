#include <stdio.h>
 
void fibonacci()
{
 
int n = 0, a = 0, b = 2;
int c;
int mod;
 
printf ("Fibonacci series with the first 2 numbers as 0 and 2 is: ");  
printf ("%d, %d", a, b);  
 
for (n=0; n<10; n++)  
{  
c = b + a;  
printf ( ", ");
printf ( "%d",c);
 
a = b;  
b = c;  
}
}
