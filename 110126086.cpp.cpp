#include<stdio.h>
 int main() {
 	int n,r,j,i,tong;
 	int a[100][100];
do{
	printf("nhap ma tran so nguyen n.\n");
	printf("nhap so nguyen n: \n");
	scanf("%d",&n);
  if(n<=0){
  	printf("yeu cau nhap lai vi n>0!\n");
  }
}while(n<=0);
   printf("nhap cac phan tu cua ma tran.\n");
     for(int i=0;i<n;i++){
     	for (int j=0;j<n;j++){
     		printf("a[%d][%d] =",i,j);
     		 scanf("%d",&a[i][j]);
		 }
	 }
  printf("ma tran vua nhap la: \n");
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		printf ("%d\t",a[i][j]);
    	}
    		 printf ("\n");
	}
 // tinh tong;
   tong=0;
     for (int i=0;i<n;i++){
     	for (int j=0;j<n;j++){
     		tong+=a[i][j];
		 }
	 }
	printf("tong cac phan tu trong ma tran la: %d\n",tong);
do{
	printf("nhap mot so nguyen r.\n");
	scanf("%d",&r);
if(r<0 || r>=n){
	printf("yeu cau nhap lai!");
}
}while(r<0 || r>=n);
   int max_dong = a[r][0];
    for (int j = 1; j < n; j++) {
        if (a[r][j] > max_dong) {
            max_dong = a[r][j];
        }
    }
    printf("Phan tu lon nhat tren dong %d la: %d\n", r, max_dong);

    return 0;
}
