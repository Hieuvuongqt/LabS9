#include <stdio.h>
#include "functions.h"
int main(){
	printf("12+15 = %d\n",TinhTong(12,15));
	
	if(KiemTraSoDuong(5)){
		printf("Day la so duong\n");
	}else{
		printf("Khong phai so duong\n");
	}
	InRaMenu();
	int x;
	printf("Nhap x:");
	scanf("%d",&x);
	if(KiemTraSNT(x)){
		printf("%d la SNT\n",x);
	}
	printf("So dao nguoc cua %d la: %d\n",x,TimSoDaoNguoc(x));
	int mang[5] = {2,2,2,2,2};
	printf("So lon nhat cua mang: %d\n",FindMax(mang,5));
	int max2 = FindNearMax(mang,5);
	if(max2 != NULL)
		printf("So gan lon nhat cua mang: %d\n",max2);
}