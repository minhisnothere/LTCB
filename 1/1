#include <stdio.h>
int main(){
	int arr[10000];
	int x,n,c=0;
	//nhap vao mang
	printf("Nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	printf("Nhap vao mang\n");
	for (int i=0;i<n;i++){
		printf("Nhap phan tu thu %d:\n",i+1);
		scanf("%d",&arr[i]);
	}
	//nhap vao so x
	printf("Nhap vao so x\n");
	scanf("%d",&x);
	//kiem tra so x trong mang
	for (int i=0; i<n;i++){
		if(arr[i]==x){
			c++;
		}
	}
	//in ket qua
	if (c==0){
		printf("Phan tu %d khong co trong mang",x);
	}else{
		printf("Trong mang co %d phan tu bang %d",c,x);
	}
	
} 
