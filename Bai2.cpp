#include<stdio.h>
int main(){
	int a,b,c,d,e;
	int iLe = 0;
	int iChan = 0;
	printf("Moi ban nhap day so nguyen a: ");
	scanf("%d",&a);
	printf("Moi ban nhap day so nguyen b: ");
	scanf("%d",&b); 
	printf("Moi ban nhap day so nguyen c: ");
	scanf("%d",&c); 
	printf("Moi ban nhap day so nguyen d: ");
	scanf("%d",&d); 
	printf("Moi ban nhap day so nguyen e: ");
	scanf("%d",&e);  
	if(a%2==0){
		iChan ++; 
	}else{
		iLe++; 
	}
	if(b%2==0){
		iChan++; 
	}else{
		iLe++; 
	}
	if(c%2==0){
		iChan ++; 
	}else{
		iLe++; 
	}
	if(d%2==0){
		iChan++; 
	}else{
		iLe++; 
	}
	if(e%2==0){
		iChan ++; 
	}else{
		iLe++; 
	}
	printf("Tong so cac so le co trong day la %d\n",iLe);
	printf("Tong so cac so chan co trong day la %d\n",iChan); 
	return 0;
}
