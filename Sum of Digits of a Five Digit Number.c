#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,div,remainder;
    scanf("%d", &n);
    div=n;
    //Complete the code to calculate the sum of the five digits on n.
    while (div>0) {
        remainder=div%10;
        sum+=remainder;
        div/=10;
    }
    printf("%d",sum);
    return 0;
}
