// PID: 730318342
// I pledge the COMP211 honor code.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char start = '.';
    char *hero = &start;
    while(1){
        putchar(*hero); //dereferencing the hero pointer
        ++hero;
    }
    return EXIT_SUCCESS; 
}
