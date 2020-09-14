#include<stdio.h>

main(){
	int y;
	printf(" So nam lam viec cua ban la:  ");
	scanf("%d",&y);
	int l=800;
	float hesoluong=0.7;
	int hesocuahesoluong;
	hesocuahesoluong=y/3;
	printf("Muc luong hien tai cua ban la %.2f  $", l+hesocuahesoluong*hesoluong*l);
}
