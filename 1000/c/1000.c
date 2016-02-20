#include<stdio.h>

int main(void){
	int a = 0;
	int b = 0;

	while( EOF != scanf("%d %d",&a,&b)){
		printf("%d\n",a+b);
	}
	return 0;
}
