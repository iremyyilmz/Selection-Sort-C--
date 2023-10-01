#include <stdio.h> 

 int d[] = {3,17,86,-9,7,-11,38} ;


void selectionSort(int dizi[],int n)
{
 int temp;
 int minIndex;
	 for(int i=0; i<n-1; i++)
	 {
			 minIndex=i;
			 for(int j=i; j<n; j++)
			 {
					 if (dizi[j] < dizi[minIndex]) 
					 minIndex=j;
			 }
					 temp=dizi[i];
					 dizi[i]=dizi[minIndex];
					 dizi[minIndex]=temp;
	 }
		

	
}
void goster(int a[],int es)
{
	for (int i=0;i<es;i++)
	printf(".%d \n",a[i]);
}

int main()
{
	
	int n=sizeof(d)/sizeof(d[0]);
	selectionSort(d,n);
	goster(d,n);	
	
}
