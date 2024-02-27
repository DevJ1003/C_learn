// C program to display byte size of different basic data types

#include <stdio.h>

int main(){

printf("Variables if type char occupy %u bytes\n", sizeof(char));
printf("Variables if type short occupy %u bytes\n", sizeof(short));
printf("Variables if type int occupy %u bytes\n", sizeof(int));
printf("Variables if type long occupy %u bytes\n", sizeof(long));
printf("Variables if type long long occupy %u bytes\n", sizeof(long long));
printf("Variables if type float occupy %u bytes\n", sizeof(float));
printf("Variables if type double occupy %u bytes\n", sizeof(double));
printf("Variables if type long double occupy %u bytes\n", sizeof(long double));

return 0;

}