# Elektronische_systemen_2

## Multisim

Lichtspectrum analyse sensor

1. **De onderdelen op de schakeling**
- XWG1 en XSC1 stellen de Esp32 voor
- U1 is de demultiplexer
- Q… zijn de fototransistors
- U… zijn invertors (zijn niet nodig op de PCB)
- R zijn de weerstanden die het licht voorstellen

1. **Hoe werkt de schakeling**
   1. *XWG1*

De XWG1 fungeert als een word generator. Deze gaat binaire getallen van 000 tot 111 uitsturen naar de demultiplexer. Dit is de output van de Esp32.

![](img/001.png)

1. *De demultiplexer*

De demultiplexer gaat de binaire woorden van de word generator ontvangen op zijn 4 ingangen. Vervolgens gaat deze hiermee zijn uitgangen aansturen. Op elke uitgang is er een fototransistor aangesloten. 

1. *De invertors*

![](img/002.png)In Multisim hebben ze alleen demultiplexers die  die enkel laag uitstuurt zoals in de waarheidstabel zichtbaar is.

Daarom gebruiken we in onze schakeling invertors.
Maar de demultiplexer die we gaan gebruiken op de PCB heeft wel de juiste waarheidstabel, dus er komen geen invertors op de PCB.

1. *De fototransistors*

De fototransistors gaan de lichtintensiteit van elke kleur in het kleurenspectrum meten. Zij gaan een stroom doorlaten naar gelang van de intensiteit van het licht.
De fototransistors worden door de demultiplexer om de beurt aangestuurd. In de multisimschakeling gebruiken we gewone transistors, voor gemak van simulatie.

1. *De weerstanden*
   Op de Multisim schakeling stellen de weerstanden de lichtintensiteit voor. Elke weerstand heeft een andere waarden, dit is om het verschil in lichtintensiteit weer te geven.
1. *De XSC1*

![](img/003.png)Dit is de input van de Esp32, hier worden de waardes van de fototransistors terug ingelezen.
Op de foto kan je duidelijk zien dat er 8 verschillende waardes worden in gelezen. Als je de waarde van een weerstand aanpast gaat die waarde ook in de grafiek veranderen. Elke waarde staat voor een andere lichtintensiteit.

1. **Het programma laten werken**

Als je de oscilloscoop beeld open zet en dan de schakeling start dan werkt de schakeling. De waardes van de weetstanden kan je aanpassen om de schakeling meer in detail te testen.

1. **Bronnen**
   1. *Datasheet van de demultiplexer in Multisim
      <https://www.ti.com/lit/ds/sdls109/sdls109.pdf>* 
2

