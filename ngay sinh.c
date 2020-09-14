#include<stdio.h>
main(){
	int tuoicogai;
	printf("Chao mung ban den voi toa an online");
	printf("\nnhap so tuoi cua co gai:");
	scanf("%d", &tuoicogai);

	printf("Co ay co tu nguyen hay khong");
	printf("\nNeu co an phim 1");
	printf("\nNeu khong an phim 0\n");
	int x;
	scanf("%d",&x);
	if(x!=0 && x!=1) {	printf("Nhap dung so phim 0 hoac 1:"); scanf("%d",&x);}
	if(x==1 && tuoicogai>=18) {
		printf("Chuc mung ban ko phai di tu roi, an mung thoi");}
		else {printf(" Ban den vch, xin chia buon");}
}
