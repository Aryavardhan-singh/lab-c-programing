// write a program to read and display elements of an array 
#include <stdio.h>
int main () {
int i , n ;
printf ("enter the number of elements you want in the array :");
scanf("%d",&n);
 int arr[n] ;
  
printf("enter the %d integers : \n", n);
for(i=0 ; i<n ; i++){
    printf("element = %d , ", arr[i]);

}
printf("\n");
return 0;



}