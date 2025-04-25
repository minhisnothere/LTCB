#include <stdio.h>
#include<math.h>
int main(){
	float x1,x2,x3,y1,y2,y3;
	// nhap
	printf("Nhap vao toa do x, y canh 1:\n");
	scanf("%f%f",&x1,&y1);
	printf("Nhap vao toa do x, y canh 2:\n");
	scanf("%f%f",&x2,&y2);
	printf("Nhap vao toa do x, y canh 3:\n");
	scanf("%f%f",&x3,&y3);
	//tinh chieu dai canh
	float d1 = sqrt(pow(x1,2)+pow(y1,2));
	float d2 = sqrt(pow(x2,2)+pow(y2,2));
	float d3 = sqrt(pow(x3,2)+pow(y3,2));
	//check
	if (d1==d2 && d2==d3){
		printf("Tam giac deu");
	}else{
		int o=0;
    //tam giac vuong
		if (pow(d1,2)==pow(d2,2)+pow(d3,2)||pow(d2,2)==pow(d1,2)+pow(d3,2)||pow(d3,2)==pow(d2,2)+pow(d1,2)){
			o+=1;
		}
    //tam giac can
		if(d1==d2||d2==d3||d3==d1){
			o+=2;
		}
    //in
		if(o==0){
			printf("Tam giac thuong");
		}else if(o==1){
			printf("Tam giac vuong");
		}else if(o==2){
			printf("Tam giac can");
		}else{
			printf("Tam giac vuong can");
		}
	}
}
