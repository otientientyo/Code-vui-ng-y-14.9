#include<stdio.h>
int main(){
	int d;
	printf("Nhap so km da di:   ");
	scanf("%d", &d);
	if(d==0) printf("So tien quy khach phai thanh toan la: 10.000 VND");
	if(d<=10) printf("So tien quy khach phai thanh toan la:   %d ", d*11000);
	else printf("So tien quy khach phai thanh toan la: %d", 110000+(d-10)*9000);
	return 0;
}
