#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
 
 long numMaxEnlaces,tamMaxRuta,nombreF;
numMaxEnlaces= pathconf("C:",_PC_LINK_MAX);//ME FALTA EL PATH
tamMaxRuta = pathconf("C:",_PC_NAME_MAX);
nombreF = pathconf("C:",_SC_OPEN_MAX);

printf("Longitud maxima de los argumentos: %d \n",numMaxEnlaces);
printf("Tamaño max de ruta: %d \n",tamMaxRuta);
printf("Nombre de fichero: %s \n",nombreF);
 return 1;   
}
