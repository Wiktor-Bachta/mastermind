#include "zadanie2.h"

// funkcja ładuje do tablicy wszystkie możliwe kombinacje
void kodowanie (kombinacja kandydaci[]) {
    int i = 0;
    for (int a = 1; a <= 6; a++) {
        for (int b = 1; b <= 6; b++) {
            for (int c = 1; c <= 6; c++) {
                for (int d = 1; d <= 6; d++) {
                    kandydaci[i].kod[0] = a;
                    kandydaci[i].kod[1] = b;
                    kandydaci[i].kod[2] = c;
                    kandydaci[i].kod[3] = d;
                    kandydaci[i].możliwy = true;
                    i++;
                }
            }
        }
    }
    return;
}
