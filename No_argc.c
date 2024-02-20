#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
while (*av != NULL)

{
printf("argv is : %s\n", *av);
av++;
}

return(0);
}
