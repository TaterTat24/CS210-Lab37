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

int is_even(int x){
    if ((x & 1) == 1){
        return 0;
    }
    else{
        return 1;
    }
}

int power_two(int N){
    return 1 << N;
}

int replace_ends(unsigned int val, unsigned int new_head, unsigned int new_tail){
    int new_val = val;

    if (((new_val >> 31) & 1) == 1) {
        if (new_head == 0){
            new_val = new_val ^ (1 << 31);
        }
    }
    else{
        if (new_head == 1){
            new_val = new_val ^ (1 << 31);
        }
    }

    if (((new_val >> 0) & 1) == 1) {
        if (new_tail == 0){
            new_val = new_val ^ (1 << 0);
        }
    }
    else{
        if (new_tail == 1){
            new_val = new_val ^ (1 << 0);
        }
    }

    return new_val;
}

int is_palindrome(char message[], int len){
    if (len <= 1)
        return 1;

    if (message[0] != message[len-1])
        return 0;

    return is_palindrome(message+1, len-2);
}

int contains_pattern(unsigned int value, unsigned int pattern, int location){
    return 1;
}

int count_vowels(char* string, int accumulator){
    if (string[0] == '\0'){
        return accumulator;
    }
    else{
        if ((string[0] == 'a') || (string[0] == 'e') ||(string[0] == 'i') || (string[0] == 'o') || (string[0] == 'u')){
            return count_vowels(&string[1], accumulator + 1);
        }
        else {
            return count_vowels(&string[1], accumulator);
        }
    }
}