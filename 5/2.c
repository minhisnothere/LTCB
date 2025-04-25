#include<stdio.h>
#include <stdlib.h>
#include<string.h>
struct ds{
	int nam_sinh;
	char ma_sv[10], ho_ten[20];
};
typedef ds ds;
void nhap(){
	FILE *f = fopen("Data.C","wb");
	ds ls;
	int n;
	
	printf("Nhap so hoc sinh: \n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		//nhap
		printf("Ma sv: \n"); fflush(stdin); fgets(ls.ma_sv,sizeof(ls.ma_sv),stdin); ls.ma_sv[strcspn(ls.ma_sv,"\n")]='\0';
		printf("Ho ten: \n"); fflush(stdin); fgets(ls.ho_ten,sizeof(ls.ho_ten),stdin); ls.ho_ten[strcspn(ls.ho_ten,"\n")]='\0';
		printf("Nam sinh:\n"); scanf("%d",&ls.nam_sinh);
		//ghi
		fwrite(&ls,sizeof(ds),1,f);
	}
	fclose(f);
}

void in(){
	ds ls;
	int stt=0;
	//doc
	FILE *f =fopen("Data.C","rb");
	printf("DANH SACH SINH VIEN\n");
	printf("%3s %10s %20s %10s\n","STT","Ma SV","Ho ten","Nam sinh");
	//in ra file nhi phan
	while(fread(&ls,sizeof(ls),1,f)==1){
		stt++;
		printf("%3d %10s %20s %10d\n",stt,ls.ma_sv,ls.ho_ten,ls.nam_sinh);
	}
	fclose(f);
}
void sua(){
	int found = 0;
	char ma[10];
	ds ls;
	FILE *f = fopen("Data.C","rb+");// doc va ghi cung luc
	printf("Nhap vao ma sinh vien can sua:\n"); fflush(stdin); fgets(ma,sizeof(ma),stdin); ma[strcspn(ma,"\n")]='\0';
	// found
	while (fread(&ls,sizeof(ds),1,f)==1){
		if(strcmp(ls.ma_sv,ma)==0){
			found=1;
			// nhap thong tin moi
			printf("Ho ten: \n"); fflush(stdin); fgets(ls.ho_ten,sizeof(ls.ho_ten),stdin); ls.ho_ten[strcspn(ls.ho_ten,"\n")]='\0';
			printf("Nam sinh:\n"); scanf("%d",&ls.nam_sinh);
			// quay lai vtri vua doc ghi de
			fseek(f,-sizeof(ds),SEEK_CUR);
			fwrite(&ls,sizeof(ds),1,f);
			break;
		}
	}
	fclose(f);
}
int main(){
	int chon;
	do{
		printf("MENU\n");
		printf("1. Tao danh sach\n");
		printf("2. Hien danh sach\n");
		printf("3. Sua thong tin sinh vien\n");
		printf("4. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				nhap();
				break;
			case 2:
				in();
				break;
			case 3:
				sua(); 
				break;
		}
	}while(chon!=4);
	return 0;
}
