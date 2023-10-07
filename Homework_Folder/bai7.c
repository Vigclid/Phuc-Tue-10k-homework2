#include <stdio.h>
int main(){
    int n,r,d;
    char c;
    n= 1;
    float pi = 3.14;
    while (n!=0){
        printf("Nhap 1 de tinh chu vi va dien tich hinh tron    \n");
        printf("Nhap 2 de tinh chu vi va dien tich hinh chu nhat\n");
        printf("Nhap 3 de tinh chu vi va dien tich hinh vuong   \n");
        printf("Nhap 0 de thoat khoi chuong trinh               \n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            printf("nhap ban kinh hinh tron: ");
            scanf("%d",&r);
            printf("chu vi la : %f | Dien tich la: %f\n",(float)2*pi*r,(float)pi*r*r);
            break;
        case 2:
            printf("nhap chieu dai va chieu rong: ");
            scanf("%d%d",&d,&r);
            printf("chu vi la : %d | Dien tich la: %d\n",2*(r+d),r*d);
            break;
        case 3:
            printf("nhap chieu dai canh: ");
            scanf("%d",&r);
            printf("chu vi la : %d | Dien tich la: %d\n",r*4,r*r);
            break;
        default:
        	printf("khong dung");
            break;
        }
    }
}
