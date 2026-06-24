#include <stdio.h>
#include "libft.h"

int main()
{
	char str[50] = "Hello, World!";
    char str2[50] = "Bye, World!";

    ft_memmove(str, str2, 5);
    printf("After memmove: %s\n", str);
    printf("After memmove: %s\n", str2);


	printf("Before bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After bzero: %s\n", str);
	return 0;

    
    return 0;
    
}