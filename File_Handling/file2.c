//WAP to printf sum of two numbers
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int i,sum=0;
	if(argc!=3)
		printf("\n WRong input!!");
	else{
			printf("\nSUM IS:");
			for(i=1;i<argc;i++)
			{
				sum=sum+atoi(argv[i]);
			}
			printf("%d\n",sum);
		}
		return 0;
}		
