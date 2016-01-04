#include<stdio.h>

int main(){
    int x,y,z;
    for(x=0;x<=20;x++){
    	for(y=0;y<=33;y++){
    		z = (100-5*x-3*y) * 3 ;
    		if(z>=3 && z<=300 && z%1 == 0 && z== 100 - x -y ){
    			printf("cock=%d,hen=%d,chicken=%d\n",x,y,z);
			}
		}
	}
	
	return 0;
} */

/*#include <stdio.h>

int main()
{
    int n,o=-1;double pi=1,i;
    printf("输入n，求PI=4[1-1/3+1/5-1/7+…+ ((-1)^n)/(2n+1)]\nn=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        pi=pi+o*(1/(2*i+1));
        o=o*(-1);
        }
     printf("%.6f",pi*4);
     
     return 0;
}
