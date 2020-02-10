#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char_array[] = "y";
    char *char_pointer = "z";
    char a_char = 'a';

    printf("&a_char: %p\n", &a_char);
    printf("char_array: %p\n", char_array);
    printf("char_pointer: %p\n", char_pointer);

    char_array[0] = 'Y';
    printf("char_array: %s\n", char_array);

    char_pointer[0] = 'Z';
    printf("char_pointer: %s\n", char_pointer);
}
