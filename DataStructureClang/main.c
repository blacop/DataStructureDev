#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	scanf("%d",&N);//����int��ֵ ���ø�ֵ��N 
	PrintN(N); 
	return 0;
}

//������ӡ���� 
void PrintN(int N)
{
	int i;
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
	return;
}

//�ݹ��ӡ���� 
void PrintNDiGui(int N)
{
	if(N){
		PrintN(N-1);
		printf("%d\n",N);	
	}
	return;
}
