#include <stdio.h>

int main(){
    int a,b ;
   printf("Enter A ( positive integer ):");
   scanf("%d",&a);
   printf("Enter B ( positive integer ):");
   scanf("%d",&b);
   if(a%b==0){
    printf("%d is divisible by %d",a,b);
   }else{
    printf("%d is not divisible by %d",a,b);
   }
   return 0 ;
}