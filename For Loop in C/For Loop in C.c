#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void computeResult(int a,int b){
    for(int n=a;n<=b;n++){
        if(n>=1 && n<=9){
            if(n==1){
                printf("one\n");
            }     
            if(n==2){
                printf("two\n");
            }     
            if(n==3){
                printf("three\n");
            }  
            if(n==4){
                printf("four\n");
            } 
            if(n==5){
                printf("five\n");
            } 
            if(n==6){
                printf("six\n");
            } 
            if(n==7){
                printf("seven\n");
            }  
            if(n==8){
                printf("eight\n");
            } 
            else if(n==9){
                printf("nine\n");
            }
        }
        else if(n>9){
            if((n/-1)%2==0){
                printf("even\n");
            }
            else {
                printf("odd\n");
            }
        }
    }
}

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
  	// Complete the code.
    computeResult(a, b);
    return 0;
}
