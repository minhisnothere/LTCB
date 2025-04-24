#include <stdio.h>
#include <math.h>
int main(){
	int n;
	//nhap
	printf("Nhap vao so phan tu cua mang:\n");
	scanf("%d",&n);
	int a[n];
	printf("Nhap vao phan tu cua mang\n");
	for (int i=0; i<n; i++){
		printf("Nhap vao phan tu thu %d: \n",i+1);
		scanf("%d",&a[i]);
	}
	//tim min max
	int max=a[0], min=a[0];
	for (int i=0; i<n; i++){
		if (a[i]>max){
			max=a[i];
		}
		if (a[i]<min){
			min=a[i];
		}
	}
	//dem 
	int cmin=0, cmax=0;
	for (int i=0;i<n;i++){
		if (a[i]==max){
			cmax++;	
		}else if (a[i]==min){
			cmin++;
		}
	}
	//in
	printf("Max = %d, xuat hien %d lan\n",max,cmax);
	printf("Min = %d, xuat hien %d lan",min,cmin);
}
