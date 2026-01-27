//To print table of n. example table 0f 5
#include <stdio.h>
int main (){
int i , n  , mul = 1 ;
printf("enter the no. which you want to print a table : ");
scanf("%d",&n);
 for (i=1 ; i <=20 ; i++){
    mul = n*i;
    printf ("%d*%d = %d \n", n , i , mul);
 }
 

 return 0 ;
}