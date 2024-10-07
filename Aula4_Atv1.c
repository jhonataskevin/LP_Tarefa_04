#include <stdio.h>

int main () {
	
	int i;
	
	for (i = 1; i <= 100; i++){
		
		if(i%3 == 0){
			printf("Ding\n ");
		}else if(i%5 == 0){
			printf("Ping\n ");
		}else{
			printf("%d\n ", i);
		}
	}
	
		printf("Lee.");
	
	return 0;
}
