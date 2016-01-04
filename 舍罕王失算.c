#include<stdio.h>
#include<math.h>
int main(){
	double num;
	int i;
	num = 0;
	for(i=0;i<64;i++){
		num += pow(2,i);
	}
	
	printf("%.f",num);
	
	return 0;
}
