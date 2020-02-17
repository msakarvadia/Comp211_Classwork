
#include <stdio.h>
#include <stdlib.h>

//global variable
char global = 1;

//static global variable = "priavte to the file"
static char static_global = 2;

int main(){
    //static local variable
    static char static_local = 3;
    //automatic variable
    char automatic = 4;
    
    printf("&global: %p",&global); 
    puts("");
    printf("&static_global: %p",&static_global); 
    puts("");
    printf("&static_local: %p",&static_local); 
    puts("");
    printf("&:automatic: %p",&automatic); 
    puts("");
    return EXIT_SUCCESS; 
}
