#include <stdio.h>
#include <math.h>
int main(){
	//nhap
	int a,b;
	printf("Nhap vao so a:\n");
	scanf("%d",&a);
	printf("Nhap vao so b:\n");
	scanf("%d",&b);
	//
	int t=a*b;
	//ucln thuat toan euclid
	while (a!=b){
		if (a>b){
			a-=b;
		}else if(b>a){
			b-=a;
		}
	}
	printf("Uoc chung lon nhat la: %d\n",a);
	//bcnn
	printf("Boi chung nho nhat la: %d\n",t/a);
}
