#ifndef MAIN_H
#define MAIN_H

unsigned long int _power(unsigned int dbase, unsigned int pwr);
unsigned int binary_to_uint(const char index);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _purchar(char c);
int get_endianness(void);

#endif
