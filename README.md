# Arduino is blinking my LEDS!
## ...with delay() and millis()

## Obiettivo

Modificare il codice sviluppato dal professore in `src/`
per fare in modo che Arduino gestisca:

1. in sequenza 3 LED aspettando con `delay()` 250ms, 500ms e 1000ms
2. in parallelo 3 LED "a ritmo" con `millis()` ogni 250ms, 500ms, 1000ms

A PIACERE: realizzati questi 2 programmi lo studente può crearne altri, come ad es:

* mettere i digitalWrite solo alla fine del loop()
* separare parte del codice in funzioni
* cambiare la sequenza di accensione
* cambiare modalità alla pressione di un pulsante

o altro.

ALTRIMENTI si provi un progetto del KIT ARDUINO acquistato.

## Come raggiungere l'obiettivo minimo:

1. Copiare https://raw.githubusercontent.com/itis-students-3ai/arduleddino/master/src/my_blink_with_delay.ino in Arduino IDE e compilarlo
2. Caricarlo su Arduino
3. Copiare https://raw.githubusercontent.com/itis-students-3ai/arduleddino/master/src/my_blink.ino in Arduino IDE e compilarlo
4. Caricarlo su Arduino
5. Studiare le modifiche del codice con 3 LED
6. Schematizzare su linea temporale il comportamento dei 3 LED con delay() e con millis()
7. Provare a modificare il codice e segnarsi precisamente eventuali difficoltà

NOTA: per provare a fare il circuito collegare i LED alla breadboard e poi ad Arduino con una resistenza da 220 ohm.

## Come fare altre cose (interagendo al meglio con GitHub)

0. Accedere a GitHub e premere "fork" su questo repository
1. Clonare il repository sulla propria macchina (installare [TortoiseGit](https://tortoisegit.org/) (più semplice) o [git bash](http://gitforwindows.org/))
2. Verificare i 2 file con codice sorgente consegnati dal professore nella directory `/src/`;
3. Realizzare uno schema su linea temporale verticale (penna e carta) delle sequenze che si vogliono realizzare;
4. Caricare su Arduino prima l'uno poi l'altro progetto;

NOTA: per provare a fare il circuito collegare i LED alla breadboard e poi ad Arduino con una resistenza da 220 ohm.

