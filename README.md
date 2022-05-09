# Arduino_Krmiljenje_El_Motorja

l) Krmiljenje el. motorja:  S tipko b1 vklopimo vrtenje motorja (preko tranzistorja) v DESNO, s tipko b2 pa v LEVO. Smer vrtenja je možno spremeniti le tako, da najprej ustavimo motor s tipko b3. Ukaz za izklop ima prednost pred vklopom. Pogon naj se izklopi in ponovni vklop ni možen, dokler: 1) vgrajen senzor tlaka olja OT v ležajih, da je tlak prenizek (potencimeter!) ALI 2) ko je uporabljeno varnostno stikalo za zasilni izklop (stikalo).

## Kosovnica

- 1x Arduino UNO
- 2x LED dioda
- 1x Motor
- 1x Dioda
- 1x Potenciometer
- 1x Tranzistor
- 3x PUSH-DOWN gumb
- 1x Stikalo (ON/OFF)
- 4x 220Ω upor
- 4x 1kΩ upor
- povezave

## Delovanje
- S pristiskom na gumb 1 se motor začne vrteti v desno smer in prižge se modra LED dioda,
- Če želimo spremeniti smer vrtenja moramo klikniti na gumb 3, da se motor najprej ugasne,
- S pristiskom na gumb 2 se motor začne vrteti v desno smer in prižge se zelana LED dioda,
- Varnostno stikalo ugasne motor, če je motor prižgan in ga onemogoči, če je ugasnjen,
- Potenciometer spreminja raven tlaka, če je ta prenizek se motor ugasne.

## Izboljšave
- Lahko bi uporabila 2 releja za spreminjanje smeri vrtenja motorja.

## Video


https://user-images.githubusercontent.com/31419257/167386556-d04904fb-91d0-4199-9096-6e0bcfde6b8e.mp4



## Priredbeni seznam
![alt text](https://github.com/MatijaBregar/Arduino_Krmiljenje_El_Motorja/blob/main/priredbeni%20seznam.png?raw=true)

## Vezava
![alt text](https://github.com/MatijaBregar/Arduino_Krmiljenje_El_Motorja/blob/main/vezava.png)

## Shema
![alt text](https://github.com/MatijaBregar/Arduino_Krmiljenje_El_Motorja/blob/main/shema.png)

## Foto
![alt text](https://github.com/MatijaBregar/Arduino_Krmiljenje_El_Motorja/blob/main/foto.jpg)
