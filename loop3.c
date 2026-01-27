//To print sum of first n numbers.
#include <stdio.h>
int main (){
    int i , n , sum = 0 ;
    printf("ENTER THE NO. WHERE YOU WANT TO STOP SUMMING UP TO: " );
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        sum += i;
    }
    printf("SUM OF FIRST %d NUMBERS IS : %d", n, sum);
    return 0 ;

}