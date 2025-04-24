#include <stdio.h>
#include <math.h>
int main(){
	//nhap
	int n,m;
	printf("Nhap vao chieu dai n:\n");
	scanf("%d",&n);
	printf("Nhap vao chieu rong m:\n");
	scanf("%d",&m);
	//in dong dau
	for (int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
	//in giua hcn
	for (int i=0; i<m-2;i++){
		printf("*");
		for (int j=0; j<n-2;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	//in dong cuoi
	for (int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
}
