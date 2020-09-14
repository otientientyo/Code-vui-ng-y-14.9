#include<stdio.h>
main(){
	int i;
	printf("Khai bao gia tri bien nguyen i:    ");
	scanf("%d",&i);
	printf("Gia tri cua bieu thuc ++i%7 la: %d", ++i%7);
	
	int a,b,c,d;
	printf("\nnhap gia tri nguyen cua a:   ");
	scanf("%d", &a);
	printf("Nhap gia tri nguyen cua b:   ");
	scanf("%d", &b);
	printf("Nhap gia tri nguyen cua c:   ");
	scanf("%d", &c);
	printf("Nhap gia tri nguyen cua d:   ");
	scanf("%d", &d);
	
	printf("\nGia tri bieu thuc 5*(c-3+d) la %d", 5*(c-3+d));
	printf("\nGia tri bieu thuc a*(b+c/d)-22 la : %d", a*(b+c/d)-22);
	
}
