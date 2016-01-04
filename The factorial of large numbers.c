#include<stdio.h>
#include<math.h>
#include<malloc.h>

void Carry(int fact[],int pos){           /* 进位处理 */
	int i,carry;
	carry = 0;                            /* carry进位数*/ 
	for(i=0;i<=pos;i++){
		fact[i] = fact[i]+carry;
		if(fact[i]<=9){
			carry = 0;                      
		}else if(fact[i]>9 && i<pos){
			carry = fact[i]/10;
			fact[i] = fact[i]%10;
		}else if(fact[i]>9 && i>=pos){
			while(fact[i]>9){
				carry = fact[i]/10;
				fact[i] = fact[i]%10;
				i++;
				fact[i]=carry;
			}
		}
	}
}

int main(){
	int num,i,j,digit,pos;
	double sum =0;
	int *fact;
	printf("请输入要求的阶乘数：");
   	scanf("%d",&num);
   //num = 1977;
	for(i=1;i<=num;i++){
		sum += log10(i);
	}
	digit = (int)sum+1;                      //求阶乘的位数来确定分配空间的大小 
	
	if(!(fact=(int *)malloc((digit+1)*sizeof(int)))){
		printf("内存分配失败");
		return 0; 
	}
	fact[0] = 1;
	for(i=1;i<=digit;i++){
		fact[i] = 0;
	}
	for(i=2;i<=num;i++){
		for(j=digit;j>=0;j--){
			if(fact[j]!=0){
				pos = j;         //找到最高位的位置 
				break;
			}
		}
		for(j=0;j<=pos;j++){
			fact[j] = fact[j]*i;       //计算阶乘 
		}
		Carry(fact,pos);         //进位处理 
	} 
	for(i=digit;i>=0;i--){
		if(fact[i]!=0){
			pos = i;
			break;
		}
	}
	for(i=pos;i>=0;i--){
		printf("%d",fact[i]);       //输出结果 
	}
	printf("\n%d的阶乘有%d位",num,digit);
	return 0;
	
} 
