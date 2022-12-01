/** lab37functs.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* ===========================================================
*/

#include <string.h>
#include <stdio.h>
#include <stdint.h>

#include "lab37functs.h"

/** ----------------------------------------------------------
 * @fn void print_bits(void* ptr, int num_bytes)
 * @brief prints char representation of any variables individual bits
 * @param ptr is a pointer to the variable being printed
 * @param num_bytes is the number of bytes in the variable
 * @return void, prints each bit as a character, ends with a new line
 * ----------------------------------------------------------
 */
void print_bits(void* ptr, int num_bytes) {
    // Cast the pointer as an unsigned byte
    uint8_t* byte = ptr;

    // For each byte, (bytes are little endian ordered)
    for (int i = num_bytes - 1; i >= 0; --i) {

        // For each bit, (inside the byte, bits are big endian ordered)
        for (int j = 7; j >= 0; --j) {

            // Print a character 1 or 0, given the bit value
            printf("%c", (byte[i] >> j) & 1 ? '1' : '0');
        }

        // Separate bytes
        printf(" ");
    }

    // End with a new line
    printf("\n");
}

// YOUR FUNCTIONS GO HERE
int sum_squares(int N){
    if (N == 1){
        return 1;
    }
    else{
        return N*N + sum_squares(N-1);
    }
}