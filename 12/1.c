#include <stdio.h>
#include <math.h>
int main(){
	//nhap
	float a,b,c,d,e,f;
	printf("Nhap vao cac he so a, b, c, d, e, f: \n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	//tinh
	double y= ((d*c/a)-f)/((d*b/a)-e);
	double x= (c-b*y)/a;
	//in
	printf("x = %.5lf\n",x);
	printf("y = %.5lf\n",y);
}
