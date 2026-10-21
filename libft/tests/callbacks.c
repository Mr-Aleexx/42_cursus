#include "../libft.h"

// just adding 1 to char for test purposes
char    mapi_callback(unsigned int index, char c)
{
    printf("This is the char %c at index %d\n", c, index);
    return (c);
}

void    iteri_callback(unsigned int index, char *c)
{
    printf("Changing %c to %c at index %d\n",
            *c, *c + 1, index);
    *c += 1;
}
