#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>


using namespace std;

int main(){
 uid_t id;
uid_t idE;

id = getuid();
idE = geteuid();
printf("Id del usuario: %d \n",id);
printf("Id efectivo del usuario: %d \n",idE);
 return 1;   
}
