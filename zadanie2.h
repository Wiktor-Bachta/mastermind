#include <stdbool.h>

typedef struct kombinacja {
    int kod[4];
    bool możliwy;
} kombinacja;

typedef struct wynik {
    int czerwone;
    int białe;
} wynik;

void kodowanie (kombinacja kandydaci[]);
wynik porównanie (kombinacja pierwsza, kombinacja druga);