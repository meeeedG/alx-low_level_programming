#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* main - to give random number and excute and print
 * return: 0 code runs with succes
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
