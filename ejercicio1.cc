#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
 #include <errno.h>


using namespace std;

int main(){
 int resultado=0;
 resultado = setuid(2);
 if(resultado == -1){
     perror("Se ha producido un error");
 }

 return 1;   
}
