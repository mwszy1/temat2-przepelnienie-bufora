Dziennik -Temat 2

02/10/2026

1. Stos to pamiec programu z adresem powrotu - miejscem do krorego program wraca po zakonczeniu funkcji.
2. Atak 40 literami A nadpisal rejestr rbp wartoscia 0x4141414141414141,
co pokazal gdb. Program zakonczyl sie Segmentation fault.
3. checksec pokazal: Full RELRO, Canary found, NX enabled, PIE enavled.
Po ataku na ofiara2 pojawil sie komunikat stack smashing setected - program przerwal sie kontrolowanie
zamiast sie wywalic po cichu.
4. Flagi kompilacji ofiara (bez zabezpieczen):
-fno-stack-protector - wylacza kanarka stosu (stack canary)
-z execstack - pozwala wykonac kod umieszczony na stosie
-no-pie - wylacza losowe rozmieszczenie kodu programu w pamieci (ASLR)
Te zabezpieczenia wylaczono celowo, zeby zobaczyc "goly" atak bez ochrony.
