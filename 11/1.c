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
	//dem
	int count[n]={0};
	int max=1;
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (a[i]==a[j]){
				count[i]++;
			}
			// tim max
			if (count[i]>max){
				max=count[i];
			}
		}
	}
	//in max
	printf("So co so lan xuat hien nhieu nhat la: ");
	for (int i=0; i<n;i++){
		if (count[i]==max){
			printf("%d ",a[i]);
		}
	}
}
