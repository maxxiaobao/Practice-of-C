#include<stdio.h>                                    //BUG!!!!!
 #include<math.h>
 
 double fenshu(int x){
 	double last;
 	last = (double)1 / x ;
 	return last;
 }
 
 int main(){
 	int i,j;
    double sum = 1;
    for(i=2;;i++){
    	
    	j = 2*i-1;
    		if( fenshu(j) <= 1e-6)
		 break;
    	if(i%2 == 0){
    		sum = sum - fenshu(j);
		}
		else{
			sum = sum + fenshu(j);
		}
		
	
		
	}
	
	printf("%.6f",sum*4);
	 
	 return 0;
 }
 
