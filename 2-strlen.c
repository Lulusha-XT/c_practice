#include "main.h"
int _strlen(char *s){
    int count = 0;

    while (*s != '\0')
    {
        count++;
        s++;
    }
return (count);

}