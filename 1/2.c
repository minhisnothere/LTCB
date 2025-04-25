#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ds{
	int id;
	char hoten[20],chucvu[20],sdt[11];
	struct ds *next;
};
typedef struct ds ds;
ds *makenode(){
	ds *newnode = (ds*)malloc(sizeof(ds));
	printf("Nhap ID:\n"); scanf("%d",&newnode->id);getchar();
	printf("Nhap ho ten:\n"); gets(newnode->hoten);
	printf("Nhap chuc vu:\n");gets(newnode->chucvu);
	printf("Nhap so dien thoai:\n");gets(newnode->sdt);
	newnode -> next = NULL;
	return newnode;
}
void nhap(ds **head){
	if(*head==NULL){
		ds *newnode = makenode();
		*head = newnode;
		return;
	}
	ds *tem = *head;
	while(tem->next != NULL){
		tem=tem->next;
	}
	ds*newnode = makenode();
	tem ->next = newnode;
}
void in(ds *head){
	printf("DANH SACH NHAN VIEN\n");
	printf("%10s %20s %20s %11s\n","ID","Ho ten","Chuc vu","So DT");

	while(head!=NULL){
		printf("%10d %20s %20s %11s\n",head->id,head->hoten,head->chucvu,head->sdt);
		head=head->next;
	}
}
void xoa(ds **head, int id){
	ds *xoa=*head;
	ds *trc=NULL;
	while(xoa!=NULL && xoa->id!=id){
		trc=xoa;
		xoa=xoa->next;
	}
	if(xoa==NULL){
		printf("Khong the xoa\n");
		return;
	}
	if (trc==NULL){
		*head = xoa ->next;
		free(xoa);
		return;
	}
	trc->next=xoa->next;
	free(xoa);
}
int main(){
	int chon,n;
	ds *head = NULL;
	do{
		printf("1. Tao danh sach nhan vien\n");
		printf("2. Hien thi danh sach nhan vien\n");
		printf("3. Xoa nhan vien\n");
		printf("4. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Nhap so luong nhan vien:\n");
				scanf("%d",&n);
				for (int i=0; i<n;i++){
					printf("Nhap nhan vien thu %d\n",i+1);
					nhap(&head);
				}
				break;
			case 2:
				in(head);
				break;
			case 3:
				printf("Nhap ID can xoa:\n");
				int id;
				scanf("%d",&id);
				xoa(&head,id);
				break;
		}
	}while(chon!=4);
}
