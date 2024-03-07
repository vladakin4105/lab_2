#include <stdlib.h>
#include <stdio.h>

int reducere_2(int x){
	x=x-2;
	return x;
}

int main(){
	int num=30, i=0;

	while (num>0){
		num=reducere_2(num);
		i++;
	}
	printf("%d", i);
	return 0;
}

