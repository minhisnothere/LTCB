#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ds{
	char sbd[10],hoten[50];
	float dv, dn;
	struct ds *next;
};

typedef struct ds ds;

ds *makenode(){
	ds *newnode =(ds*)malloc(sizeof(ds));
	printf("Nhap so bao danh:\n"); gets(newnode->sbd);
	printf("Nhap ho ten:\n"); gets(newnode->hoten);
	printf("Nhap Diem viet:\n"); scanf("%f",&newnode->dv);
	printf("Nhap Diem nghe:\n"); scanf("%f",&newnode->dn);
	getchar();
	newnode -> next = NULL;
	return newnode;
}
void themsau(ds **head){
	if (*head == NULL){
		ds *newnode = makenode();
		*head = newnode;
		return;
	}
	ds *temp = *head;
	while (temp -> next !=NULL){
		temp = temp ->next;
	}
	ds *newnode = makenode();
	temp -> next = newnode;
}
int size(ds *head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}
void in(ds *head){
	int n= size(head);
	int stt=0;
	ds *temp = head;
	printf("Danh sach diem thi\n");
	printf("%5s %10s %25s %10s %10s\n","STT","SBD","Ho ten","Diem Viet","Diem_nghe");
	for (int i=0; i<n;i++){
		printf("%5d %10s %25s %10.2f %10.2f\n",i+1,temp->sbd,temp->hoten,temp->dv,temp->dn);
		temp = temp->next;
	}
}
void xoa(ds **head, char sbd[]){
	int n=size(*head);
	if( n==0){
		return;
	}else if( n==1 && strcmp((*head )-> sbd,sbd)==0){
		ds *temp = *head ;
		free(temp);
		return;
	}
	int vt;
	ds *tam=(*head);
	for(int i=1;i<=n;i++){
		if(strcmp(tam->sbd,sbd)==0){
			vt=i;
			break;
		}
		tam=tam->next;
	}
	if(vt==1){
		ds *tam=*head;
		(*head)=(*head)->next;
		free(tam);
		return;
		}
	ds *xoa=(*head);
	ds *truoc=*(head);
	for(int i=1;i<vt;i++){
		xoa=xoa->next;
	}
	for(int i=1;i<vt-1;i++){
		truoc=truoc->next;
	}
	truoc->next=xoa->next;
	free(xoa);
}
int main(){
	int chon,n=0;
	ds *head =NULL;
	do{
		printf("1.Tao danh sach thi sinh\n");
		printf("2.Hien thi danh sach thi sinh\n");
		printf("3. Xoa thi sinh\n");
		printf("4.Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				printf("Nhap so luong danh sach diem:\n");
				scanf("%d",&n);
				getchar();
				
				for (int i=0 ; i<n ;i++){
					printf("Nhap sinh vien thu %d: \n",i+1);
					themsau(&head);
				}
				break;
			case 2:
				in(head);
				break;
			case 3:
				getchar();
				char sbd[10];
				printf("Nhap so bao danh can xoa:\n");
				gets(sbd);
				xoa(&head,sbd); 
				break;
		}
	}while(chon!=4);
} 
