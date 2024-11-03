#include <stdio.h>


int main(){
 

 int x ; 
int num =1 ; 
 printf("bir sayı girin : ") ; scanf("%d",&x) ; printf("\n");

 for(int i =1 ; i<=x; i++){

for(int j=1 ;j<=i ; j++){
    if(j%2==1){
        printf("1") ; 
    }
if(j%2==0){
 printf("0") ; 
}
}


printf("\n") ;

 }










}