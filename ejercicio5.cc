#include <sys/utsname.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
struct utsname buffer;
int resultado ;
resultado = uname(&buffer);
if(resultado == -1){
    printf("El buffer pasado no es correcto. \n");
}
else{
    printf("Nombre del SO: %s \n",buffer.sysname);
    printf("Nombre del host: %s \n",buffer.nodename);
    printf("Release del SO: %s \n",buffer.release);
    printf("Version del SO: %s \n",buffer.version);
    printf("Hardware: %s \n",buffer.machine);
    printf("Nombre del dominio: %s \n",buffer.domainname);
}

 return 1;   
}
