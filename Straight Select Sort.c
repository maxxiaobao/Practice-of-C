#include<stdio.h>
 int main(){
 	int a[10],i,j,max,temp;
 	for(i=0;i<10;i++){
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<9;i++){
	 	max=i;
	 	for(j=i+1;j<10;j++){
	 		if(a[max]<a[j]){
	 			max=j;
			 }
		 }
		 temp=a[max];
		 a[max]=a[i];
		 a[i]=temp;
	 }
	 
	 for(i=0;i<9;i++){
	 	printf("%d ",a[i]);
	 }
	 printf("%d",a[i]);
	 
	 return 0;
 }
