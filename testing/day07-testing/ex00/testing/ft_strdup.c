#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int        n;
    int        size;
    char    *dest;

    size = 0;
    while (src[size])
    {
        size++;
    }
    if (!(dest = (char*)malloc(sizeof(char) * size + 1)))
        return (0);
    n = 0;
    while (n < size)
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return (dest);
}