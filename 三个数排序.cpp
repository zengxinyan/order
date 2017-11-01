#include <stdio.h>
int main (){
	double a,b,c,x,y,z;
	printf("三个数从大到小排序\n请输入三个不同的数:");
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
