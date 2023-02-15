#include<stdio.h>
int SumOfElement(int dizi[],int n);
int main(){
	int dizi[100],n,i;
	printf("eleman sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ninci elemani giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("toplam:%d",SumOfElement(dizi,n-1));
	return 0;
}
int SumOfElement(int dizi[],int n){
	if(n==0)
	   return dizi[0];
	return dizi[n]+SumOfElement(dizi,n-1);
}
