#include <stdio.h>

#define FIZZ 3
#define BUZZ 5

int main(){
	int i=0;
	fprintf(stderr,"aaa");
	while(i<=100){
		if(i%FIZZ==0){
			printf("Fizz");
		}
		if(i%BUZZ==0){
			printf("Buzz");
		}
		if(i%FIZZ!=0&&i%BUZZ!=0)printf("%d",i);
		i++;
		printf("\n");
	}
	return 0;
}