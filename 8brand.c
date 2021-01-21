#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv) {
	if (argc == 4){
		unsigned int min = (unsigned int)atoi(argv[1]);
		unsigned int max = (unsigned int)atoi(argv[2]);
		unsigned int amount = (unsigned int)atoi(argv[3]);
		time_t t;

		srand((unsigned) time(&t));

		printf("!byte ");

		for(unsigned int i = 0; i < amount; i++ ){
			printf("$%02x", rand() % ((max + 1) - min) + min);
			if(i < amount - 1){
				printf(",");
			}
		}
	}
	
	return(0);
}