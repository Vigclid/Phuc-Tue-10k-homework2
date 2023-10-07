#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float delta,x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    delta = b*b - 4*a*c;
    if (delta < 0) printf("Vo nghiem");
    else { if (delta ==0) {
    	x1 = (float)(-b+sqrt(delta))/(2*a);
    	printf("1 nghiem: %g ",x1);
	}
        if (delta > 0) {
        	x1 = (float)(-b+sqrt(delta))/(2*a);
        	x2 = (float)(-b-sqrt(delta))/(2*a);
        	printf("Nghiem 1 : %g , nghiem 2: %g",x1,x2);
		}
    }
}
