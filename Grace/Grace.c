#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/* Comment */
#define PATH "Grace_kid.c"
#define CODE "#include <fcntl.h>%c#include <stdio.h>%c#include <unistd.h>%c%c/* Comment */%c#define PATH %cGrace_kid.c%c%c#define CODE %c%s%c%c#define MAIN(X) int main(){int file_descriptor; if ((file_descriptor = open(X, O_CREAT | O_WRONLY | O_TRUNC, 0666)) > 0) { (void)dprintf(file_descriptor, CODE, 10, 10, 10, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 10); (void)close(file_descriptor); } return 0; }%cMAIN(PATH)"
#define MAIN(X) int main(){int file_descriptor; if ((file_descriptor = open(X, O_CREAT | O_WRONLY | O_TRUNC, 0666)) > 0) { (void)dprintf(file_descriptor, CODE, 10, 10, 10, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 10); (void)close(file_descriptor); } return 0; }
MAIN(PATH)