#include<stdio.h>
  
int main(){
  
    int number;
      
    printf("\n Enter number  : ");
      
    scanf("%d", &number);
      
    if(number % 2 == 0){
        printf("\n %d is even number\n\n", number);
    }
    else{
        printf("\n %d is odd number\n\n", number);
    }
      
    return 0;
}