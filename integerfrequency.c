#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char str[1000];
    int fre[10]={0};
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='0'&&str[i]<='9'){
            fre[str[i]-'0']++;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",fre[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
