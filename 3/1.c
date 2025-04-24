#include <stdio.h>
#include <math.h>
int check(int n){
	int o=1;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			o=0;
			break;
		}
	}
	if (n==1){
		o=0;
	}
	return o;
}
int main(){
	int n;
	//nhap vao so n
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	//kiem tra so nguyen to
	for (int i=1; i<n; i++){
		if (check(i)==1){
			printf("%d ",i);
		}
	}
} 
