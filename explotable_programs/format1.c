#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int target;

//level 18
void vuln(char *string){
    printf(string);

    if (target){
        printf("You have modified the target :)\n");
    }
}

int main(int argc, char **argv){
    vuln(argv[1]);
}