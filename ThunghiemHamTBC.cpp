#include <stdio.h>
#include "HamTinhTBC.h"
int main(){
	int n;
	printf("Nhap so phan tu trong mang la: ");
	scanf("%d",&n);
	int arr[n];
	float y;
	y=TrungBinhCong(arr,n);
	printf("%f",y);
}
