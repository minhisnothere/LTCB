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
	int x;
	int n;
	//nhap
	
	printf("Nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int a[n];//day ban dau
	int b[n]={0},countb=0;//day nho hon
	int c[n]={0},countc=0;//day lon hon
	
	printf("Nhap vao cac phan tu cua mang\n");
	for (int i=1; i<=n;i++){
		printf("Nhap phan tu thu %d: \n",i);
		scanf("%d",&a[i-1]);
	}
	
	printf("Nhap vao so x:\n");
	scanf("%d",&x);
	//kiem tra
	for (int i=0; i<n; i++){
		if (a[i]<x){
			b[countb]=a[i];
			countb++;
		}
		else if(a[i]>x){
			c[countc]=a[i];
			countc++;
		}
	}
	//in day lon hon
	printf("Co %d phan tu lon hon %d trong mang: ",countc,x);
	for (int i=0;i<countc;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
	//in day nho hon
	printf("Co %d phan tu nho hon %d trong mang: ",countb,x);
	for (int i=0;i<countb;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}
