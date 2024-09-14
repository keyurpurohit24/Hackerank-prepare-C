#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int t1,t2,t3,max_and=0,max_or=0,max_xor=0;
  for(int i=1;i<=n;i++){
     for(int j=i+1;j<=n;j++){
         t1 = i&j;
         if(t1<k && t1>max_and){
             max_and = t1;
         }
         t2 = i|j;
         if(t2<k && t2>max_or){
             max_or = t2;
         }
         t3 = i^j;
         if(t3<k && t3>max_xor){
             max_xor = t3;
         }
     }
  }
  printf("%d\n%d\n%d",max_and,max_or,max_xor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
