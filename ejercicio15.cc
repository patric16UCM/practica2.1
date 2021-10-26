#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
struct tm* info;
time_t tiempo;
char fecha[500];
tiempo = time(NULL);
info = localtime(&tiempo);
strftime(fecha,100,"%A,%d de %B de %Y,%I:%M",info);
printf("%s \n",fecha);
 return 1;      
}
