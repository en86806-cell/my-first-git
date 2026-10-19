#include <locale.h>
#include <stdio.h>

void domik(void)
{
    setlocale(LC_ALL, "Russian");

    puts("   /\\");
    puts("  /  \\");
    puts(" /    \\");
    puts("/______\\");
    puts("|      |");
    puts("|  []  |");
    puts("|      |");
    puts("|______|");

}

int main(void)
{
    domik();
    return 0;
}
