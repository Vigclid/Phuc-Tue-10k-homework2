#include <stdio.h>
int main(){
    int a,b;
    printf("Nhap 2 so: ");
    scanf("%d%d",&a,&b);
    if (a==0) {
        if (b==0) 
        	printf("phuong trinh vo so nghiem");
        printf("phuong trinh vo nghiem");
    } else 
		printf("%f la nghiem", (float)(-b)/a);
}
