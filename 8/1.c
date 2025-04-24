#include <stdio.h>
#include <math.h>
int check(int n){
	float hehe= sqrt(n);
	int hihi=sqrt(n);
	if (hehe==hihi){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int n;
	int a=1;
	int b=1;
	//nhap
	printf("Nhap so n:\n");
	scanf("%d",&n);
	//tinh
	for (int i=0;i<n-2;i++){
		int t=b;
		b+=a;
		a=t;
	}
	//in
	printf("So thu n cua day fibonacci la: %d",b);
}
