#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("No DOnate ");
    fgets(name, 548, stdin);
    printf("length = %d\n", strlen(name)); 
    name[strlen(name)-1] = '\0'; 

    printf("Hello world %s!\n", name);
    return 0;
}
