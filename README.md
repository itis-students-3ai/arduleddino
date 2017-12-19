# Arduino is blinking my LEDS!
## ...with delay() and millis()

## Obiettivo

Modificare il codice sviluppato dal professore in `src/`
per fare in modo che Arduino gestisca:

1. in sequenza 3 LED aspettando con `delay()` 250ms, 500ms e 1000ms
2. in parallelo 3 LED "a ritmo" con `millis()` ogni 250ms, 500ms, 1000ms 

Realizzati questi 2 programmi lo studente può crearne altri a piacere, come ad es:

* separare parte del codice in funzioni
* cambiare la sequenza di accensione
* cambiare modalità alla pressione di un pulsante

e altri...

## Come fare

0. Accedere a GitHub e premere "fork" su questo repository
1. Clonare il repository sulla propria macchina (installare [TortoiseGit](https://tortoisegit.org/) (più semplice) o [git bash](http://gitforwindows.org/))
2. Verificare i 2 file con codice sorgente consegnati dal professore nella directory `/src/`;
3. Realizzare uno schema su linea temporale verticale (penna e carta) delle sequenze che si vogliono realizzare;
4. Se si possiede Arduino: caricare (se si possiede) su Arduino prima l'uno poi l'altro progetto;

Collegare i LED alla breadboard e poi ad Arduino con una resistenza da 220 ohm.

