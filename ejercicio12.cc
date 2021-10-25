#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
time_t tiempo;
tiempo = time(NULL);

printf("Tiempo en segundos: %d s\n",tiempo);

 return 1;   
}
