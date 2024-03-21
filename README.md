# Mastermind
Program pozwala zagrać w grę mastermind. Gracz ustala sobie kombinację czterech cyfr od 1-6, a program proponuje układ.
Następnie gracz wpisuje liczbę kołeczków czerwonych (dobra cyfra na dobrym miejscu) orz białych (dobra cyfra na złym miejscu).
Program zgaduje układ w maksymalnie ośmiu pytaniach!

```
make all
./main
```
Przykład:
```
[1] [1] [1] [1]?
czerwone: 1
białe: 0
[1] [2] [2] [2]?
czerwone: 2
białe: 0
[1] [2] [3] [3]?
czerwone: 2
białe: 0
[1] [2] [4] [4]?
czerwone: 3
białe: 0
[1] [2] [4] [5]?
czerwone: 2
białe: 1
[1] [2] [6] [4]?
czerwone: 4
białe: 0
Wygrałem!
```
