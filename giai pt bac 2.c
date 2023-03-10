#include<stdio.h>

int main (){
	float a,b,c,d,x1,x2,delta;
	printf("Nhap cac he so a,b,c la:");
	scanf("%f%f%f",&a,&b,&c);
	delta=b*b-4*a*c;
	/*phuong trinh bac nhat */
	if(a == 0){
	   if(b == 0){
	   	printf("phuong trinh da cho vo nghiem");
	   }	
	   else{
	   	x1=-c/b;
	   	printf("phuong trinh da cho co nghiem duy nhat la: %f",x1);
	   }}
	   /*phuong trinh bac hai */
	else if(delta > 0){
	   	x1=(-b+sqrt(delta))/(2*a);
	   	x2=(-b-sqrt(delta))/(2*a);
	   	printf("phuong trinh co hai nghiem la \nx1=%f \nx2=%f",x1,x2);
	   	
	   	}
	else if(delta == 0){
	   		x1=(-b)/(2*a);
	   		printf("phuong trinh da cho co nghiem duy nhat la : %f",x1);
	   		
		   }
	else{
		   	printf("phuong trinh da cho vo nghiem");
		   }
		   
      
}

