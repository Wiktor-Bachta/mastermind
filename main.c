#include <stdio.h>
#include "zadanie2.h"

int main (void) {
    kombinacja kandydaci[1296];
    kodowanie (kandydaci);
    kombinacja nowa; // zaproponowana aktualnie kombinacja
    wynik aktualny; // aktualny stan czerwone/białe
    while (true) {

        // proponuje pierwszego możliwego kandydata
        int spr = 0; 
        for (int i = 0; i < 1296; i++) {
            if(kandydaci[i].możliwy == true) {
                nowa = kandydaci[i];
                printf("[%d] [%d] [%d] [%d]?\n", kandydaci[i].kod[0], kandydaci[i].kod[1], kandydaci[i].kod[2], kandydaci[i].kod[3]);
                spr = 1;
                break;
            }
        }

        // jeżeli żaden kandydat nie jest możliwy, użytkownik oszukuje
        if (spr == 0) {
            printf("Oszukujesz!\n");
            return 0;
        }

        // pobiera informacje o białych i czerwonych kołeczkach
        do {
            printf("czerwone: ");
            scanf("%d", &aktualny.czerwone);
            printf("białe: ");
            scanf("%d", &aktualny.białe);
        } while (aktualny.białe > 4 || aktualny.białe < 0 || aktualny.czerwone > 4 || aktualny.czerwone < 0);

        // porównuje każdą możliwą kombinację z kandydatem
        // jeżeli ilość czerwonych lub białych nie zgadza się z wpisanymi, kombinacja jest usuwana z możliwych
        // jeżeli są 4 czerwone, program kończy działanie
        for (int i = 0; i < 1296; i++) {
            wynik por = porównanie(nowa, kandydaci[i]);
            if (kandydaci[i].możliwy == true && (por.czerwone != aktualny.czerwone || por.białe != aktualny.białe)) {
                kandydaci[i].możliwy = false;
            }
            else if (por.czerwone == 4) {
                printf("Wygrałem!\n");
                return 0;
            }
        }
    }
    return 1;
}
