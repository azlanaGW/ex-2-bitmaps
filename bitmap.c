#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* CSCI 2113 Exercise 1: Bitmaps
    by: YOUR NAME HERE

    Compile this code with:  gcc -lm bitmap.c -o bitmap
    Run your code with:      ./bitmap
*/

/* Print out the bits in a byte, from right to left */
void printBits(char c){
    // DO NOT MODIFY THIS CODE
    int i=0;
    char one = 1;

    // Print the bits backwards so lowest order bit is to the right
    for(i=7; i >= 0; i--) {
        if( c & (one << i) ) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
}

/* Clear out a bitmap */
void clearBitmap(char bitmap[], int numBits) {
     // DO NOT MODIFY THIS CODE
    int cnt;
    for(cnt = 0; cnt < ceil(numBits/8.0); cnt++) {
        bitmap[cnt] = 0;
    }
}

/* Functions you must define for Step 2: */
// Set a bit to 1
void setBit(char bitmap[], int index){
    // YOUR CODE HERE!
}
// Check if a bit is set and return 1 or 0
int getBit(char bitmap[], int index){
    // YOUR CODE HERE!
}
// Print out a full bitmap
void printBitmap(char bitmap[], int numBits){
    // YOUR CODE HERE!
}

void stepOne(){
    char byte = 0;

    printf("\n==== STEP ONE ====\n");

    // Convert "00000101" from binary to decimal in your head
    // assign "byte" to that value
    printf("Trying to set bitmap to 00000101...\n");
    /* BOTH OF THESE LINES ARE EQIVALENT */
    byte = 0b101;
    byte = 5;

    printBits(byte);
    printf("\n");

    // Use bitwise operators to set bit index 5 to 1
    // Should print: 00100101
    printf("Trying to set bit in index 5...\n");
    /* BOTH OF THESE LINES ARE EQIVALENT */
    byte = byte | (1<<5);
    byte = byte | 0b100000;
    printBits(byte);
    printf("\n");

    printf("Testing bits 2 and 6...\n");
    // Check if the index 2 bit is set, if so print "bit 2 is set"
    char test_mask = 0;
    /* BOTH OF THESE LINES ARE EQIVALENT */
    test_mask = 0b100;
    test_mask = 1 << 2;
    if(byte & test_mask) {
        printf("bit 2 is set\n");
    }
    else {
        printf("bit 2 is not set\n");
    }

    // Check if the 6th bit is set, if not set print "bit 6 is not set"
    /* BOTH OF THESE LINES ARE EQIVALENT */
    test_mask = 0b1000000;
    test_mask = 64;
    if((byte & test_mask) == test_mask) {
        // If you want to test for equality you need parenthesis to
        // ensure the correct order of operations!
        printf("bit 6 is set\n");
    }
    else {
        printf("bit 6 is not set\n");
    }

    // Print as decimal
    printf("%d\n", (int) byte);

    // Print as binary
    printf("Bin: ");
    printBits(byte);
    printf("\n");
}

void stepTwo(){
    char month[2];

    /*
    printf("\n==== STEP TWO ====\n");

    // You must fill in the appropriate functions for this to work

    clearBitmap(month, 16);

    setBit(month, 1);
    setBit(month, 3);
    setBit(month, 5);
    setBit(month, 7);
    setBit(month, 13);
    setBit(month, 15);
    setBit(month, 28);

    printf("All bits:\n");
    printBitmap(month, 16);
    printf("\n");
    */
}

main() {
    stepOne();

    //stepTwo(); // uncomment this to enable stepTwo

}
