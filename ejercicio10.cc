#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <pwd.h>
#include <stdio.h>


using namespace std;

int main(){
uid_t id;
struct passwd* datos;
id = getuid();
datos = getpwuid(id);
printf("Nombre del usuario: %s \n",datos->pw_name);
printf("Nombre del directorio: %s \n",datos->pw_dir);
printf("Descripcion del usuario: %s \n",datos->pw_gecos);
 return 1;   
}
