#include <unistd.h>
#include <sys/time.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
struct timeval tiempo1;
struct timeval tiempo2;
long int incremento=0;
int resultado1 = gettimeofday(&tiempo1,NULL);

for (long int i =0; i < 100000000;i++){
incremento++;
}


int resultado2 = gettimeofday(&tiempo2,NULL);
long tiempoTardado = tiempo2.tv_usec - tiempo1.tv_usec;
printf("Se ha tardado %d segundos \n",tiempoTardado);
 return 1;      
}
