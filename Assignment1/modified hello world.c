#include <stdio.h>
#include <stdlib.h>

int main()
{

    char userName[50];

    printf("Please enter your name:");
    fgets(userName,sizeof(userName),stdin);
    printf("Hello %s", userName);






    return 0;
}
