#include <stdio.h>
#include <math.h>
void tinh(int n, int p, int m, int a[100][100], int b[100][100], int c[100][100]){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int t=0;
			for (int k=0; k<p;k++){
				t+=a[i][k]*b[k][j];
			}
			c[i][j]=t;
		}
	}
}
void in(int n, int m, int c[100][100]){
	for (int i=0; i<n;i++){
		for (int j=0;j<m; j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
void nhap(int n, int m, int a[100][100]){
	printf("Nhap ma tran\n");
	for (int i=0; i<n;i++){
		printf("Nhap vao hang thu %d\n",i+1);
		for (int j=0;j<m; j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int main(){
	int chon;
	int n,p,m;
	//menu
	do{
		printf("MENU\n");
		printf("1. Nhap 2 ma tran \n");
		printf("2. Tinh tich 2 ma tran\n");
		printf("3. Hien thi tich ma tran\n");
		printf("4. Ket thuc\n") ;
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Nhap vao so n, p, m:\n");
				scanf("%d%d%d",&n,&p,&m);
				
				int a[100][100];
				int b[100][100];
				int c[100][100];
				
				nhap(n,p,a);
				nhap(p,m,b);
				break;
			case 2:
				tinh(n,p,m,a,b,c);
				break;
			case 3:
				in(n,m,c);
				break;
		}
	}while(chon!=4);
}
