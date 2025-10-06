#include <stdio.h>
#include "international-hello-world.h"

int main(void) {
    print_hello_string();
    return 0;
}


void print_hello_string() {

    #ifdef ENGLISH
    printf("Hello, world!\n");
    #endif

    #ifdef CHINESE
    printf("你好，世界！(Nihao, shijie!)\n");
    #endif

    #ifdef FRENCH
    printf("Bonjour le monde!\n");
    #endif

    #ifdef SPANISH
    printf("¡Hola, mundo!\n");
    #endif

    #ifdef DANISH
    printf("Hej, Verden!\n");
    #endif
}
