#include "main.h"
void print_rev(char *s){
     int count = 0;

    while (s[count] != '\0')
    {
        count++;

    }
    for (int i = count-1; i >= 0; i--)
    {
        _putchar(s[i]);

    }
    _putchar('\n');

}