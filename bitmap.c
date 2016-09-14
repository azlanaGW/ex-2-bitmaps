#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* CSCI 2113 Exercise 1: Bitmaps
    by: Alexandra Zlanabitnig

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
void setBit(char bitmap[], int indBit){ 
  //your code here
  
  int indInBm = -1;  //index in bitmap, undetermined
  
  while(indInBm==-1){ //while indInBm is not determined..
    int i;
    for(i=0; i>=indBit; i+8){
      if(indBit<= i+7){
        indInBm = i % 7;
      }
    }
  }
  /*now we have Bit location determined in the bit map array as indInBm*/
  //now access the byte in the determined index of the bitmap array
  int indByte= indBit % 7;   //so if it was bit 9 then it would be index 2 in this byte
  
  bitmap[indInBm] |= 1<< indByte;   //makes bit set to 1
}


// Check if a bit is set and return 1 or 0
int getBit(char bitmap[], int indBit){
    // YOUR CODE HERE!
  
  int indInBm = -1;
  
  while(indInBm== -1){ //while indInBm is not determined..
    int i;
    for(i=0; i >= indBit; i + 8){
      if(indBit <= i + 7){
        indInBm= i % 7;   //gives index in bit array wherein the byte the bit is located 
      }
    }
  }
  /*now we have Bit location determined in the bit map array as indInBm  */
  //now access the byte in the determined index of the bitmap array
  int indByte= indBit % 8;   //so if it was bit 8 then it would be index 0 in this byte
  
  //located, now to print if it is 1 or 0
  
  char byte = bitmap[indInBm];  //this is the whole char int he array index now called 'byte'
  int byteReal = (int) byte;  //turns byte into an int 
  //int test = 0b111111;
  // First bit
  //(test >> 0) % 2; // 1
  // Second bit
  int bit = (byteReal >> indByte) % 2; // 0
  printf((char)bit);
  //ERROR BECAUSE CASTING FROM CHAR TO INT************* failed
  
}
// Print out a full bitmap
void printBitmap(char bitmap[], int numBits){ 
    // YOUR CODE HERE!
        int bit = 0;
        int i = 0;
        char char_to_print;

        printf("Number of bits: %d\n", numBits); 

        for (; i < numBits; i++){
          char_to_print = bitmap[i];

          for (bit = 0; bit < 8; bit++){
            printf("%i", char_to_print & 0X01);
            char_to_print >>= 1;
          }
          printf(" ");
          printf("Number of bits: %d -- i: %d", numBits, i);
        }

        printf("\n");
  
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
    //char month[2];
    char month[4];
    int i;
    for(i = 0; i < 4; i++) {
      month[i] = "00000000";
    }
    
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

    stepTwo(); // uncomment this to enable stepTwo

}
