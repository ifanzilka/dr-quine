#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define CODE "#include <stdlib.h>%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%c%c#define CODE %c%s%c%c#define COMP %c%s%c%c#define FILE %c%s%c%c%cint main()%c{%cint fd;%cint i = %d;%cchar *path;%cchar *execute;%cif(i > 0)%c{%c    i--;%c    path = NULL;%c    execute = NULL;%c    asprintf(&path, FILE, i);%c    if ((fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666)) > 0)%c    {%c        dprintf(fd, CODE, 10,10,10,10,10,10,34,CODE,34,10,34,COMP,34,10,34,FILE,34,10,10,10,10,10,i,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10);%c        close(fd);%c        asprintf(&execute, COMP, i, i, i);%c        system(execute);%c    }%c    free(path);%c    free(execute);%c}%creturn (0);%c}"
#define COMP "clang -Wall -Werror -Wextra -I /usr/include -o Sully_%d Sully_%d.c && ./Sully_%d"
#define FILE "Sully_%d.c"

int main()
{
int fd;
int i = 5;
char *path;
char *execute;
if(i > 0)
{
    i--;
    path = NULL;
    execute = NULL;
    asprintf(&path, FILE, i);
    if ((fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666)) > 0)
    {
        dprintf(fd, CODE, 10,10,10,10,10,10,34,CODE,34,10,34,COMP,34,10,34,FILE,34,10,10,10,10,10,i,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10);
        close(fd);
        asprintf(&execute, COMP, i, i, i);
        system(execute);
    }
    free(path);
    free(execute);
}
return (0);
}