#include <stdio.h>


int main (){

int x ; 

printf("bir tam sayı girin : ") ; scanf("%d",&x) ; 
printf("\n") ; 


for (int i =1 ; i<=x;i++){

for(int j=1 ; j<=i ; j++){

    printf("*") ; 
}

printf("\n") ; 


}
















return 0 ; 
}