#include "main.h"

/* _strcat - concatenates two strings
*@dest: string to link to
*@src: strong to add
*
*Return: a  pointer to the resulting string
*/

char *_strcat(cahr *dest, char *src)
{
    int a, b
    a = 0
    b = 0

    while (dest[a] != '\0')
            a++
    while (src[b] != '0')
    {
        dest[a] = src[b]
        b++
        a++
    }
    dest[a] ='\0'

    return (dest);
}