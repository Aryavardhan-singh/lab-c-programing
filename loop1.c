// To print ASCII values and corresponding characters 
#include <stdio.h>
int main() {
int i ;
printf ("ASCII VALUR | CHARACTER \n");
printf ("..........\n");

for(i=32; i<=126 ; i++){
    printf("%d | %c\n", i , i );
}
return 0; 
}