#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];   
    int num[10] = {0,0,0,0,0,0,0,0,0,0};
    scanf("%s",s);
    for(int i = 0 ; i < strlen(s) ; i++){
        if(s[i] == '0'){
            num[0]++;
        }
        else if(s[i] == '1'){
            num[1]++;
        }
        else if(s[i] == '2'){
            num[2]++;
        }
        else if(s[i] == '3'){
            num[3]++;
        }
        else if(s[i] == '4'){
            num[4]++;
        }
        else if(s[i] == '5'){
            num[5]++;
        }
        else if(s[i] == '6'){
            num[6]++;
        }
        else if(s[i] == '7'){
            num[7]++;
        }
        else if(s[i] == '8'){
            num[8]++;
        }
        else if(s[i] == '9'){
            num[9]++;
        }
    }
    for(int i = 0; i < 10 ; i++){
        printf("%d ",num[i]);
    }
    return 0;
}
