#include <stdio.h>

#include <sys/types.h>

#include <unistd.h>

int main()
{
    for (int i = 0; i < 100; i++) // loop will run n times
    {
        printf("I am a parent process\n");

        int fork();

        printf("I am a child process\n");
    }
    return 0;
}
