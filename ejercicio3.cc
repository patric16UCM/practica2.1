#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
 #include <errno.h>


using namespace std;

int main(){
 
 for(int i =0; i<255;i++){
     perror("Se ha producido un error ");
     printf("El valor es %d.\n",strerror(i));
 }

 return 1;   
}
