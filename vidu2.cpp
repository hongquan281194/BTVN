#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhapb=");
	scanf("%d",&b);
	if(a>b){
		printf("%d la so lon hon", a);
	}else{
		if(a==b){
			printf("hai so bang nhau");
		}else{
			printf("%d la so lon hon",b);
		}
	}
} 
