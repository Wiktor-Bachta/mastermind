#include "zadanie2.h"

// funkcja porównuje dwie kombinacje i zwraca ilość czerwonych i białych 
// kołeczków między nimi (ta relacja jest symetryczna)
wynik porównanie (kombinacja pierwsza, kombinacja druga) {
    wynik rezultat;
    rezultat.czerwone = 0;
    rezultat.białe = 0;
    for (int i = 0; i < 4; i++) {
        if (pierwsza.kod[i] == druga.kod[i]) {
            rezultat.czerwone++;
            pierwsza.kod[i] = -1;
            druga.kod[i] = -2;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (pierwsza.kod[i] == druga.kod[j]) {
                rezultat.białe++;
                pierwsza.kod[i] = -1;
                druga.kod[j] = -2;
            }
        }
    }
    return rezultat;
}