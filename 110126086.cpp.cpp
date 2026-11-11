#include <stdio.h>
#include <stdlib.h>

float a,b,Tong,Hieu,Tich,Thuong;

int main() {
	printf ("nhap so a:");
	scanf ("%f",&a);
	
	printf ("nhap so b:");
	scanf ("%f",&b);
	
	Tong    = a + b ;
	Hieu    = a - b ;
	Tich    = a * b ;
	Thuong  = a / b ;
	
	printf(" Tong=%.2f\n Hieu=%.2f\n Tich=%.2f\n Thuong=%.2f",Tong,Hieu,Tich,Thuong);
	return 0;
}