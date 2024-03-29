#include"main.h"
/**
*_strncpy-function to copy strings
*@dest:destination string
*@src:source string
*@n:number of bytes
*Return:dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
