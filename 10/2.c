#include <stdio.h>
#include <math.h>
// tao kieu du lieu stak
struct stack{
	// ngan xep co 1000 phan tu
	int data[1000];
	// vi tri cao nhat 
	int top;
};

typedef stack stack;
//tao ngan xep
stack createStack(){
	stack s;
	// vi tri cao nhat dau tien la -1
	s.top=-1;
	return s;
}
// kiem tra ngan xep rong
bool isEmpty(stack s){
	return s.top==-1;
}
// kiem tra ngan xep day chua
bool isFull(stack s){
	return s.top==999;
}
// push phan tu
void push(stack *s, int value){
	// tang vi tri dau
	s->top++;
	// them phan tu vao vi tri dau
	s->data[s->top]=value;
}
// pop phan tu
int pop(stack *s){
	if (isEmpty(*s)){
		return -1;
	}
	// lay phan tu dau tien
	int temp=s->data[s->top];
	// giam vi tri cao nhat de xoa phan tu
	s->top--;
	return temp;
}
void chuyen(int n, int k, stack *s){
	while (n>0){
		int t=n%k;
		push(&*s,t);
		n/=k;
	}
}
//chuyen sang hexa va oct
void in(int o){
	if(o==10){
		printf("A");
	}else if (o==11){
		printf("B");
	}else if (o==12){
		printf("C");
	}else if (o==13){
		printf("D");
	}else if (o==14){
		printf("E");
	}else if (o==15){
		printf("F");
	}else {
		printf("%d",o);
	}
}
void xuat(stack s){
	int c=s.top;
	for (int i=0;i<=c;i++){
		int o=pop(&s);
		in(o);
	}
}
int main(){
	int n,chon,k;
	printf("Nhap vao so n:\n");
	scanf("%d",&n);
	stack s1=createStack();//bin
	stack s2=createStack();//oct
	stack s3=createStack();//hex
	do{
		printf("MENU\n");
		printf("1. Chuyen doi so sang he 2\n");
		printf("2. Chuyen doi so sang he 8\n");
		printf("3. Chuyen doi so sang he 16\n");
		printf("4. Ket thuc\n");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				k=2;
				chuyen(n,k,&s1);
				xuat(s1);
				printf("\n");
				break;
			case 2:
				k=8;
				chuyen(n,k,&s2);
				xuat(s2);
				printf("\n");
				break;
			case 3:
				k=16;
				chuyen(n,k,&s3);
				xuat(s3);
				printf("\n");
				break;
			
		}
	}while(chon!=4);
}
