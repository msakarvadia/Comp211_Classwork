//Simple program to print command-line args together

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    for(int i = 0; i < argc; ++i){
        printf("%s\n", *argv);
        argv++;
    }    
    return EXIT_SUCCESS; 
}
