#include<stdio.h>
int main () {
	int passWord = 12345;
	int number;
	printf("Moi ban nhap mat khau: ");
	scanf("%d",&number);
	while(number!=passWord){
		printf("Moi ban nhap lai mat khau: ");
		scanf("%d",&number);	
	} 
	if(number=passWord){
		printf("Ban da nhap dung mat khau");  
	}
	return 0; 
}
