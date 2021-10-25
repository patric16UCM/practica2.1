#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
tm* info;
time_t tiempo;
tiempo = time(NULL);
info = localtime(&tiempo);

printf("Año: %d \n",info->tm_year);
 return 1;   
}
