#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch,s[20],sen[30];
    scanf("%[^/]%*c",&ch);
    scanf("%[^/]%*c",s);
    scanf("%[^/]%*c",sen);    
    printf("%c %s",ch,s,sen);
    return 0;
}
