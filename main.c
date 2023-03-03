#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]){
    if (argc != 3){
		printf("Required 2 arguments: filename, timer value");
		exit(1);
	}

    //set timer interrupt to a random value
    srand(time(0));

    

}