#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int pid = fork();
    printf("Id del proceso: %d\n", pid);

    if (pid > 0)
        sleep(60);
    else if(pid == 0){
        printf ("\nProceso zombie creado con éxito.");
        printf ("\nEstara activo por 60 segundos\n");
        exit(0);
    }
    else
        printf("\nLo sentimos! El proceso hijo no pudo ser creado...");

    return 0;
}