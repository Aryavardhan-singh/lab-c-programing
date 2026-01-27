//To find Factorial of a number.
#include <stdio.h>
int main (){
    int n , i , factorial = 1 ;
    printf ("enter the no. which u wanted to get a factorial :");
    scanf("%d", &n);
    for (i = 1 ; i <= n ; i ++ ){
        factorial = factorial*i ;
       

    } 
    printf ("%d", factorial);
    return 0;

}