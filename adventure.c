
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
