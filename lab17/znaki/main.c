#include <stdio.h>
#include <stdlib.h>
#include <io.h>      // dla _setmode
#include <fcntl.h>   // dla _O_U8TEXT
#include <locale.h>

int main(void) {
    // Ustawienie lokalizacji na polską (UTF-8)
    setlocale(LC_ALL, "pl_PL.UTF-8");

    // Przełączenie standardowych strumieni na tryb UTF-8
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin),  _O_U8TEXT);

    // Wyświetlenie przykładowego tekstu zawierającego polskie znaki
    wprintf(L"Witaj świecie! Zażółć gęślą jaźń.ęśół\n");

    // Pobranie danych od użytkownika
    wchar_t input[256];
    wprintf(L"Wpisz tekst: ");
    wscanf(L"%ls", input);
    wprintf(L"Wpisałeś: %ls\n", input);

    return 0;
}
