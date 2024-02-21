#include "main.h"
#include <stdlib.h>

#include <stdlib.h>
#include <string.h>

char *create_char_array(unsigned int size, char c)
{
    char *arr;

    if (size == 0)
    {
        return NULL;
    }

    arr = malloc(sizeof(char) * size);

    if (arr == NULL)
    {
        return NULL;
    }

    memset(arr, c, size);

    return arr;
}

int main()
{
    unsigned int size = 5;
    char c = 'a';
    char *arr = create_char_array(size, c);

    if (arr == NULL)
    {
        printf("Failed to create array.\n");
        return 1;
    }

    for (unsigned int i = 0; i < size; i++)
    {
        printf("%c", arr[i]);
    }

    free(arr);
    return 0;
}
