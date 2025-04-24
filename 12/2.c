#include <stdio.h>
#include <math.h>
void tinh(int n, int a[100][100]){
	int c=1;
	int h1=0,c1=0,h2=n-1,c2=n-1;
	while (h1<=h2 && c1<=c2){
		for (int i=c1; i<=c2; i++){
			a[h1][i]=c;
			c++;
		}
		h1++;
		for (int i=h1;i<=h2;i++){
			a[i][c2]=c;
			c++;
		}
		c2--;
		for (int i=c2;i>=c1;i--){
			a[h2][i]=c;
			c++;
		}
		h2--;
		for (int i=h2;i>=h1;i--){
			a[i][c1]=c;
			c++;
		}
		c1++;
	}
}
void in(int n, int a[100][100]){
	for (int i=0;i<n;i++){
		for(int j=0; j<n;j++){
			printf("%5d ",a[i][j]);
		}
		printf("\n");
	} 
}
int main(){
	int n,chon;
	//nhap
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	int a[100][100];
	//menu
	
	do{
		printf("MENU\n");
		printf("1. Tinh ma tran xoay\n");
		printf("2. Hien ma tran xoay\n");
		printf("3. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				tinh(n,a);
				break;
			case 2:
				in(n,a);
				break;
		}
	}while(chon!=3);
}
