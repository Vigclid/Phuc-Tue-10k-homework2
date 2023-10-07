#include <stdio.h>
int main(){
    int i=4;
    float a,b,c,d,max = 0;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    if (a>max) max = a;
    if (b>max) max = b;
    if (c>max) max = c;
    if (d>max) max = d;
    printf("%g",max);
}
