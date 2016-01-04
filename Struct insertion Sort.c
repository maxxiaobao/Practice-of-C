#include<stdio.h>
 
 int main()
 {
 	int a[11],i,j;
 	for(i=1;i<11;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 for(i=2;i<11;i++){
	 	a[0]=a[i];
	 	j=i-1;
		 	while(a[0]<a[j] && j>=1){
		 		a[j+1]=a[j];
		 		a[j]=a[0];
			 j--;	 		
			}
	 }
	 for(i=1;i<11;i++)
	 {
	 	printf("%d ",a[i]);
	 }
	 
	 return 0;
  }
