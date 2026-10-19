#include <locale.h>
#include <stdio.h>

void domik(void)
{
    setlocale(LC_ALL, "Russian");

    puts("      /\\");
    puts("     /  \\");
    puts("    /____\\");
    puts("    |    |");
    puts("    | [] |");
    puts("    |    |");
    puts("    | __ |");
    puts("    |____|");
}

int main(void)
{
    domik();
    return 0;
}
