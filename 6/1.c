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
	//nhap
	int n;
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	//ktra
	for (int i=1; i<n;i++){
		if (check(i)==1){
			printf("%d ",i);
		}
	}
}
