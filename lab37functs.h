/** lab37.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* ===========================================================
*/

#ifndef LAB37_H
#define LAB37_H

void print_bits(void* ptr, int num_bytes);

// YOUR FUNCTIONS GO HERE
int sum_squares(int N);

int is_even(int x);

int power_two(int N);

int replace_ends(unsigned int val, unsigned int new_head, unsigned int new_tail);

int is_palindrome(char message[], int len);

int contains_pattern(unsigned int value, unsigned int pattern, int location);

int count_vowels(char* string, int accumulator);
#endif