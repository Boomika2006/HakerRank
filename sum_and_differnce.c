#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float a,b;
    scanf("%d %d",&n,&m);
    scanf("\n%f %f",&a,&b);
    int sum=n+m;
    printf("%d %d",sum,n-m);
    printf("\n%0.1f %0.1f",a+b,a-b);


    return 0;
}
