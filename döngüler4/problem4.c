#include <stdio.h>


int main (){

int x ; 
int i =1 ;

printf("bir tamsayı girin : ") ; scanf("%d",&x); printf("\n") ; 



for(int i =1 ;i<=x ; i++){
    printf("*") ; 
}
printf("\n") ; 

for (int c = 1;c<=x-2 ; c++ ){
printf("*") ;

for(int f = 1 ; f<x-1;f++){
    printf(" ") ;


}

 printf("*");
 printf("\n") ; 



}
if (x > 1) { 
        for (int i = 1; i <= x; i++) {
            printf("*"); 
        }
}







    return 0 ; 
}