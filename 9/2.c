#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct ds{
	int so_tien;
	char sdt[11];
};
typedef ds ds;
void nhap(){
	FILE *f = fopen("SO_LIEU.C","wb");
	ds ls;
	int n;
	
	printf("Nhap so luong ung ho: \n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		//nhap
		printf("So dien thoai: \n"); fflush(stdin); fgets(ls.sdt,sizeof(ls.sdt),stdin); ls.sdt[strcspn(ls.sdt,"\n")]='\0';
		printf("So tien: \n"); scanf("%d",&ls.so_tien);
		//ghi
		fwrite(&ls,sizeof(ds),1,f);
	}
	fclose(f);
}
void bonus(){
	FILE *f = fopen("SO_LIEU.C","ab");
	ds ls;
	int n;
	
	printf("Nhap so luong ung ho bo sung: \n");
	scanf("%d",&n);

	for (int i=0;i<n;i++){
		//nhap
		printf("So dien thoai: \n"); fflush(stdin); fgets(ls.sdt,sizeof(ls.sdt),stdin); ls.sdt[strcspn(ls.sdt,"\n")]='\0';
		printf("So tien: \n"); scanf("%d",&ls.so_tien);
		//ghi
		fwrite(&ls,sizeof(ds),1,f);
	}
	fclose(f);
}

void in(){
	ds ls;
	int tong=0,stt=0;
	FILE *f =fopen("SO_LIEU.C","rb");
	printf("DANH SACH UNG HO QUY VACXIN\n");
	printf("%3s %15s %10s\n","STT","So dien thoai","So tien");
	//in ra file nhi phan
	while(fread(&ls,sizeof(ls),1,f)==1){
		stt++;
		printf("%3d %15s %10d\n",stt,ls.sdt,ls.so_tien);
		tong+=ls.so_tien;
	}
	printf("%22s %d\n","Tong tien",tong);
}
int main(){
	int chon;
	do{
		printf("MENU\n");
		printf("1. Nhap so lieu\n");
		printf("2. Bo sung so lieu\n");
		printf("3. Hien thi noi dung\n");
		printf("4. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				nhap();
				break;
			case 2:
				bonus();
				break;
			case 3:
				in();
				break;
		}
	}while(chon!=4);
}
