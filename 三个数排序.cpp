#include <stdio.h>
int main (){
	double a,b,c,x,y,z;
	printf("�������Ӵ�С����\n������������ͬ����:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	if (a<b){
		x=a,a=b,b=x;
	}
    if (a<c){
        z=a,a=c,c=z;
	}
	if (b<c){
	    y=b,b=c,c=y; 
    } 
   	printf("%f>%f>%f",a,b,c);
	return 0;
	} 
