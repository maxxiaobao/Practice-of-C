#include<stdio.h>
#define N 3   //3*3的矩阵
typedef int Matrix;
int CreatMatrix(Matrix G[][N]);  //声明函数
int MultMatrix(Matrix A[][N],Matrix B[][N],Matrix C[][N]);

void main(){
	int i,j;
	Matrix A[N][N],B[N][N],C[N][N];
	CreatMatrix(A);
	CreatMatrix(B);
	MultMatrix(A,B,C);
     for(i=0;i<N;i++){
     	for(j=0;j<N;j++){
     		printf("%d ",C[i][j]);
		 }
		 
		 printf("\n");
	 }
	 
}

int CreatMatrix(Matrix G[][N]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&G[i][j]);
		}
	}
	
	return 0;
}

int MultMatrix(Matrix A[][N],Matrix B[][N],Matrix C[][N]){
	int i,j,k;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			C[i][j]=0;
			for(k=0;k<N;k++){
				C[i][j] += A[i][k]*B[j][k];
			}
		}
	}
	
	return 0;
}
