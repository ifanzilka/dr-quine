#include <stdio.h>

/* Comment */
#define PROGRAMM "#include <stdio.h>%c%c/* Comment */%c#define PROGRAMM %c%s%c%c%cvoid print_self_program()%c{%c    printf(PROGRAMM,10,10,10,34,PROGRAMM,34,10,10,10,10,10,10,10,10,10,10,10,10,10);%c}%c%cint main()%c{%c    /* Comment */%c    print_self_program();%c%c    return (0);%c}"

void print_self_program()
{
    printf(PROGRAMM,10,10,10,34,PROGRAMM,34,10,10,10,10,10,10,10,10,10,10,10,10,10);
}

int main()
{
    /* Comment */
    print_self_program();

    return (0);
}