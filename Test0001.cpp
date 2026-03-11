/*
C++ 14 script
Written by Álvaro Carvalho
March 05, 2026
*/

/* incase of libraries to compile the code */
#include <stdio.h>
#include <cstdint>

/* functions are written here */
uint8_t funcao(void){
    uint8_t e = 2;
    uint8_t t = 4;
    uint8_t j;
    j = e + t;
    return j;
    }

/* main voids prioritize to be compiled as a 32 bit executable */ 
int main(void){
    uint8_t var1 = 255;
    int8_t var2 = 127;
    int16_t var3 = 1000;
    printf("%d %d Porque %d", var1, var2, var3);
    if (var1 > 100){
        printf("\nlegal");
    }
    
    uint8_t varres;
    varres = funcao();
    
    printf("\n%d", varres);
    /* any exit code from 0 to 255 are allowed no matter what */
    return 255;
}
