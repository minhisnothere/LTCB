#include <stdio.h>
#include <stdlib.h>
void doc(int *m, int *n, int a[100][100], int b[100][100]){
	FILE *f;
	// mo file
	f = fopen("MA_TRAN.C","r");
	//doc file
	//doc m n 
	fscanf(f,"%d",&*m);
	fscanf(f,"%d",&*n);
	// doc ma tran a 
	for (int i=0;i<*m;i++){
		for (int j=0; j<*n;j++){
			fscanf(f,"%d",&a[i][j]);
		}
	}
	//doc ma tran b
	for (int i=0;i<*m;i++){
		for (int j=0; j<*n;j++){
			fscanf(f,"%d",&b[i][j]);
		}
	}
	//dong file
	fclose(f);
}
void ghi(int m, int n,int c[100][100]){
	FILE *f;
	f = fopen("MA_TRAN.C","a");// "a" de ghi them vao file
	// ghi them vao file
	for (int i=0; i<m;i++){
		for (int j=0; j<n;j++){
			fprintf(f,"%d ",c[i][j]);
		}
		fprintf(f,"\n");
	}
	//dong file
	fclose(f);
}
void ket_qua(){
	FILE *f =fopen("MA_TRAN.C","r");
	char ch;
    printf("Noi dung tep MA_TRAN.C\n");
    //fgetc(f): doc tung ki tu tep f
    while ((ch = fgetc(f)) != EOF)
    //putchar(ch): in ki tu ra man hinh
        putchar(ch);
    fclose(f);
}
void tinh(int m, int n, int a[100][100],int b[100][100]){
	int c[100][100];
	for (int i=0;i<m;i++){
		for (int j=0; j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//ghi
	ghi(m,n,c);
}
int main(){
	int m,n,a[100][100],b[100][100],chon;
	do{
		printf("MENU\n");
		printf("1. Doc tep ma tran A, B tu tep\n");
		printf("2. Tinh ma tran C va ghi bo sung vao cuoi tep\n");
		printf("3. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				doc(&m,&n,a,b);
				break;
			case 2:
				tinh(m,n,a,b);
				ket_qua();
				break;
		}
	}while (chon!=3);
} 
