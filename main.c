#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Donate: ");
    fgets(name, 355, stdin);
    printf("length = %d\n", strlen(name)); 

    printf("Hello %s!\n", name);
    return 0;
}
