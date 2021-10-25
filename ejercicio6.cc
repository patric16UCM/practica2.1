#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
 
 long longDatos,numMaxHijos,numMaxArchivos;
longDatos= sysconf(_SC_ARG_MAX);
numMaxHijos = sysconf(_SC_CHILD_MAX);
numMaxArchivos = sysconf(_SC_OPEN_MAX);
printf("Longitud maxima de los argumentos: %d \n",longDatos);
printf("Numero maximo de hijos: %d \n",numMaxHijos);
printf("Numero maximo de archivos: %d \n",numMaxArchivos);
 return 1;   
}
