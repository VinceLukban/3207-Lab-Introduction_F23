#include <stdlib.h>


char randchar()
{
    // Generate a random character between 'a' and 'z'
    return 'a' + rand() % 26;
}