//Declares and initializes an unsigned int to some value > 2.1 billion.
//Declare a char * that points to the address of your unsigned int.
//Yes, I really do mean char *
//        Print out your int in hex.
//The formatting character for a hexadecimal int is: %x
//        Use your pointer to print out each individual byte of your int.
//The formatting character for a single byte in hex is %hhx, that is half of half of an integer.
//Using your pointer, modify the individual bytes of your int and print out the resulting value in hex and decimal after each modification.
//Increment each byte by 1
//Increment each byte by 16
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int num = 300 + 15;
    char * pointer = &num;
    printf("pointer with value %d\n", * pointer);
    printf("print random unsigned int (%d) in hex: %x\n\n", num, num);
    for (int i = 0; i < sizeof(num); i++){
        printf("byte number %d: %hhx value %d, %x\n", i, *(pointer+i), *(pointer+i), pointer+i);
    }
    printf("pointer dec, hex, and address: %d,%x,%p\n\n", *pointer, *pointer, pointer);
    for (int i = 0; i < sizeof(num); i++){
        *(pointer)+=1;
        printf("modified byte (+1) number %x: %d (dec), %x (hex), %hhx (hhx)\n", i, *pointer, *pointer, pointer);
        pointer++;
    }
    printf("pointer dec, hex, and address: %d,%x,%p\n\n", *pointer, *pointer, pointer);
    pointer = &num;
    for (int i = 0; i < sizeof(num); i++){
        *(pointer)+=16;
        printf("modified byte (+16) number %x: %d (dec), %x (hex), %hhx (hhx)\n", i, *pointer, *pointer, pointer);
        pointer++;
    }
    printf("pointer dec, hex, and address: %d,%x,%p\n", *pointer, *pointer, pointer);
    return 0;
}