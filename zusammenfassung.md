# 2AHITS ITSI Übungen

[Fach-Homepage🌐](https://www.franzmatejka.at/htl/doc/_SJ_2025/2AHITS_ITSI.html)
# Arbeitsbericht vom 17.09.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Umgang mit Replit und einführung in Markdown

# Überschrift 1
## Überschrift 2
### Überschrift 3 
#### Überschrift 4

**Fett**
*Kursiv*
`Code`
z.B. für Dateinamen `250917.md`

Bei Übungen immer den Text der Übung ins Dokument mt aufnehmen

---

**Übung:** mit welchem Befehl kann der  Inhalt eines Verzeichnisses angezeigt werden?

**Recherche:**

Infomationen über ls in fogenden Web-Seiten

-[Link auf HTL](https://htl-braunau.at/)

**Lösung**

```bash
$ ls
```
**Ausgabe**:

```
250917.md
```

![Kaenguru](images/image.png)# Arbeitsbericht vom 1.10.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: File Befehle in Linux


# Grundlagen

Shell: ist ein Programm das eine textorientierte Schnittselle zum Betriebssystem zur Verfügung stellt.

Prompt:

```sh
~/workspace$
```

Einacher Befehl:

```sh
$ date
```

Jeder Befehl hat optionen über die das Verhalten gesteuert werden kann.

```sh
$date -I
```

## Optionen:

-short-hand = 1 Buchstabe
-long-hand = Wort

```sh
$date --iso-8601
````


Quellen zu Informationen über einen Befehl:

- häufig: Option `--help`
- man pages (Manual = Handbuch) `$ man date`,
  nicht in Replit aber in gängigen Linux
  Distributionen
- Internetsuche mit "man date"
- KI

## Argumente

Daten mit denen ein befehl arbeitet.

```sh
$ echo Hallo Welt
```
`Hallo Welt` ist hier das argument

mit optionen

```sh
$ echo -n Hallo Welt
```

## Tastenkürzel

- Pfeil nach oben/unten Historie
- Tabolator: automatische: File vervollständigung.
- Strg-A: Anfang der zeile (Strg-E Ende...)
- Strg-C: Abbruch des aktuellen Kommandos

## File Befehle



```sh
cd
```
Change Directory = Wechselt das aktuelle Verzeichnis
Optionen:
cd ~: Geht ins Home Verzeichnis
cd ..: Geht ein verzeichnis zurück
```sh
mkdir
```
Make Directory = Erstellt ein neues Verzeichnis.
Beispiel:
mkdir projekt
Erstellt ein neues Verzeichnis mit dem Namen „projekt“.
```sh
ls
```
List = listet alle Dateien und Verzeichnisse auf
Optionen:
ls -l: Zeigt Details wie Größe, Datum, Rechte
ls -a: Zeigt auch versteckte Dateien (beginnen mit .)
```sh
touch 
```
Erstellt eine leere Datei.
Beispiel:
touch datei.txt
Erstellt die Datei „datei.txt“, wenn sie nicht existiert.
```sh
pwd
```
Print Working Directory = Zeigt den vollständigen Pfad des aktuellen Verzeichnisses.
Beispiel:
pwd
Ausgabe könnte sein: /home/runner/workspace/berichte
```sh
rm 
```
Remove = Löscht Dateien oder Verzeichnisse.
Beispiel:
rm test.md
Löscht die Datei „test.md“.
Optionen:
rm -r ordnername = Löscht Ordner und deren Inhalt rekursiv
rm -f datei.txt = Erzwingt das Löschen ohne Nachfrage
```sh
rmdir
```
Remove Directory = Löscht ein leeres Verzeichnis.
Beispiel:
rmdir leerer_ordner
Löscht den Ordner nur, wenn er leer ist.
Für nicht-leere Verzeichnisse musst du rm -r verwenden.





Unterschied absoluter und relativer Pfad

Absoluter Pfad: 
Gibt den vollständigen Weg vom Wurzelverzeichnis (root) bis zur Datei oder zum Ordner an.
Unabhängig vom aktuellen Verzeichnis.

Gibt den Pfad ausgehend vom aktuellen Verzeichnis (pwd) an.
Hängt davon ab, wo man sich gerade befindest.


Bedeutung von cd (ohne Argument) und von ~
cd führt dich in das Home-Verzeichnis.
~ (Tilde) steht für dein Home-Verzeichnis.

### Prompt bei Chatgpt:
Erkläre mir die befehle cd, mkdir, ls, touch, pwd, rm, rmdir in der Linux Shell
Erkläre mir die befehle den Unterschied von Absoluten/relativen Pfad in der Linux Shell
Erkläre mir den Befehl cd (ohne argument) und  die ~ (Tilde) in der Linux Shell?# Arbeitsbericht vom 17.09.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Basics / Filesystem in der Shell

#### Übung (date)

Recherchiere in der manpage von date wie folgende ISO 8601 Datumsausgabe erzeugt werden kann.

```
2023-11-07T08:43:53+00:00
```

Hinweis: Die `-I` Option zeigt Default nur das Datum an.

**Lösung**
```
$ date -Iseconds
```
**Ausgabe**
```
2025-10-15T06:23:28+00:00
```

#### Übung (Directories und Files)

Lege mit `mkdir` und `touch` folgende Verzeichnisstruktur an:

```
./
└── abcd/
    ├── first_dir/
    │   ├── abcd.01.1.txt
    │   ├── abcd.01.2.txt
    │   └── abcd.01.3.txt
    └── second_dir/
        ├── xyz.02.1.txt
        ├── xyz.02.2.txt
        └── xyz.02.3.txt
```

**Lösung**
```
$ mkdir abcd/
$ cd abcd/
~/workspace/abcd$ mkdir first_dir/
~/workspace/abcd$ cd first_dir/
~/.../abcd/first_dir$ touch abcd.01.1.txt
~/.../abcd/first_dir$ touch abcd.01.2.txt
~/.../abcd/first_dir$ touch abcd.01.3.txt
~/.../abcd/first_dir$ cd ..
~/workspace/abcd$ mkdir second_dir/
~/workspace/abcd$ cd second_dir/
~/.../abcd/second_dir$ touch xyz.02.1.txt
~/.../abcd/second_dir$ touch xyz.02.2.txt
~/.../abcd/second_dir$ touch xyz.02.3.txt
~/.../abcd/second_dir$ cd ..
~/workspace/abcd$ cd ..
~/workspace$ tree
```
**Ausgabe**
```
.
├── abcd
│   ├── first_dir
│   │   ├── abcd.01.1.txt
│   │   ├── abcd.01.2.txt
│   │   └── abcd.01.3.txt
│   └── second_dir
│       ├── xyz.02.1.txt
│       ├── xyz.02.2.txt
│       └── xyz.02.3.txt
├── berichte
│   ├── 250917.md
│   ├── 251001.md
│   ├── 251015.md
│   └── images
│       └── image.png
├── README.md
└── xyz
```
Weiters:

- Stelle das Arbeitsverzeichnis auf `abcd/second_dir` und erstelle (ohne `cd` ein weiteres Mal zu verwenden):
  - ein Unterverzeichnis `in_first_dir`  in `first_dir`, und
  - darin wiederum eine Datei `neu.txt`
    Endgültig sieht es dann so aus: 

  ```
  ./
  └── abcd/
      ├── first_dir/
      │   ├── in_first_dir/
      │   │   └── neu.txt
      │   ├── abcd.01.1.txt
      │   ├── abcd.01.2.txt
      │   └── abcd.01.3.txt
      └── second_dir/
          ├── xyz.02.1.txt
          ├── xyz.02.2.txt
          └── xyz.02.3.txt
  ```

Verwende den Befehl `tree`  um (alternativ zu `ls`) die Ausgabe in obiger Form zu erhalten. Achtung: `tree` muss von REPL nachinstalliert werden, das geschieht automatisch nach der Eingabe von `tree` – dabei die erste dargestellte Möglichkeit auswählen.

**Lösung**
```
$ mkdir -p ../first_dir/in_first_dir/
$ touch ../first_dir/in_first_dir/neu.txt
$ cd ..
$ cd ..
$ tree
```
**Ausgabe**
```
.
├── abcd
│   ├── first_dir
│   │   ├── abcd.01.1.txt
│   │   ├── abcd.01.2.txt
│   │   ├── abcd.01.3.txt
│   │   └── in_first_dir
│   │       └── neu.txt
│   └── second_dir
│       ├── xyz.02.1.txt
│       ├── xyz.02.2.txt
│       └── xyz.02.3.txt
├── berichte
│   ├── 250917.md
│   ├── 251001.md
│   ├── 251015.md
│   └── images
│       └── image.png
├── README.md
└── xyz
```

#### Übung (Befehle – Bewegen und Kopieren)

Informiere dich über die Befehle `rm`, `rmdir`, `cp` und `mv`. Probiere die Befehle aus und dokumentiere deine Erkenntnisse im Arbeitsbericht.

`rm` = removes file or directory
```
$ touch test.txt
$ rm test.txt
```

`rmdir` = removes empty directories
```
$ mkdir test
$ rmdir test
```

`cp` = copy files and directories
```
$ touch test.txt
$ cp test.txt test1.txt
```

`mv` = moves or renames files and directories
```
mv test.txt /abcd/first_dir
```

Für die anderen Aufgaben hatte ich keine Zeit mehr in der Stunde# Arbeitsbericht vom 05.11.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Stdin/Stdout


## Stdin/Stdout 
### Cat 

```bash
cat >test.txt
```

Öffnet die Datei test.txt zur Bearbeitung oder erstellt die Datei falls sie noch nicht existiert. In den flogenden Zeilen kann man jetzt den Inhalt eingeben um das abzubrechen Strg + C nutzen

```bash
$ cat >test.txt
erste zeile
^C
```

Mit dem größer statt dem kleiner Zeichen wird der Inhalt der Datei angezeigt. Hier muss man das größer Zeichen aber nicht verwenden.

```bash
cat <test.txt
```

Cat kann auch verwendet werden um den Inhalt von zwei Textdateien zusammenzufügen.

```bash
$ cat test.txt hallo.txt >halltest.txt
```
### Echo

Echo kann auch verwendet werden um Text in eine Datei zu schreiben.

```bash
echo 2AHITS >hallo.txt
```

Mit zwei mal dem kleiner Zeichen wir in die nächste freie Zeile geschrieben ohne den bisherigen Text zu verändern.

```bash
echo 2AHITS >>hallo.txt
```

Um Dateien mit leerzeichen im Namen oder text mit > und < auszugeben Hochkomma verwenden.

```bash
$ mkdir ' Urlaubs Fotos'
$ echo '>>> Achtung <<<'
```

## Übungen

Übung (Kopie mit cat)
Erstelle mit Hilfe von “cat” eine Kopie der Datei test.txt in der neuen Datei test2.txt. test2.txt soll den gleichen Inhalt enthalten wie test.txt. Prüfe ob test2.txt wirklich den gewünschten Inhalt hat.

Lösung:

```bash
$ cat test.txt

zweite zeile
$ cat test.txt >test2.txt
$ cat test2.txt 

zweite zeile
```

Übung (dirlist in File)
Schreibe den, mittels ls ermittelten, Inhalt des Verzeichnisses /etc in eine Textdatei mit dem Namen etcdir.txt. Inhalt des Verzeichnisses = die Namen der enthaltenen Files und Unterverzeichnisse.

Lösung:

```bash
$ ls /etc
$ ls /etc > etcdir.txt 
$ cat etcdir.txt 
```
Übung (os-release)
Es gibt eine Datei /etc/os-release.

Betrachte deren Inhalt mit cat, welche Informationen kannst du daraus ableiten. Würde diese Information einem Hacker helfen der sich Zugriff auf das System verschafft hat? Wenn ja, wie?
Wie wird die Datei mit ls -l angezeigt? Was bedeutet diese Anzeige?

```bash
$ cat /etc/os-release
$ ls -l
```

Übung (Textdatei erstellen)
Mit Hilfe von mehreren echo Befehlen können einfache Textdateien erstellt werden.

Erzeuge nur unter Verwendung von echo Befehlen die Datei made_by_echoing.txt mit Inhalt:


```bash
$ echo ===================== >made_by_echoing.txt
$ echo '=    HTL BRAUNAU    =' >>made_by_echoing.txt
$ echo ===================== >>made_by_echoing.txt
$ echo '= 2AHITS Gruppe 2   =' >>made_by_echoing.txt
$ echo '= 0 Schülerinnen    =' >>made_by_echoing.txt
$ echo '= 13 Schüler        =' >>made_by_echoing.txt
$ echo ===================== >>made_by_echoing.txt
$ cat made_by_echoing.txt 
```

Übung (C Hallo Welt)
Erstelle nur mit Hilfe von echo Befehlen eine Datei hello.cpp mit folgendem Inhalt:

#include <iostream>

int main() {
  printf("\n\t*** Hallo Welt ***\n");
  return 0;
}
Hinweis: Verwende einfache Hochkommas rund um den mit echo auszugebenden Text (Beispiel: echo 'text') ansonsten hat die shell Schwierigkeiten mit den Sonderzeichen #,<,> etc.

```bash

$ echo 'int main() {' >hello.cpp
$ echo 'printf("\n\t*** Hallo Welt ***\n");' >>hello.cpp
$ echo 'return 0;' >>hello.cpp
$ echo '}' >>hello.cpp
```

Compiliere das C Programm mit folgendem Befehl in der Kommandozeile:

g++ -o hello hello.cpp
Das Programm kann so gestartet werden:

./hello
Mit Strich-Punkt (;) getrennt lassen sich auch 2 Befehle hintereinander inn der Kommandozeile schreiben – probiere auch das einmal aus:

g++ -o hello hello.cpp;./hello

Hatte in der Stunde keine Zeit mehr das C Programm zu Compilieren oder zu starten

Folgende Aufgaben habe ich nicht gemacht:
Übung (C in/out)
Challenge (C in/out)
Übung (semikolon in command-line)
Übung (Here-Documents)# Arbeitsbericht vom 19.11.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: stdin/stdout Teil 2

### Übung (C Hallo Welt)
Erstelle nur mit Hilfe von echo Befehlen eine Datei hello.cpp mit folgendem Inhalt:

#include <iostream>

int main() {
  printf("\n\t*** Hallo Welt ***\n");
  return 0;
}
Hinweis: Verwende einfache Hochkommas rund um den mit echo auszugebenden Text (Beispiel: echo 'text') ansonsten hat die shell Schwierigkeiten mit den Sonderzeichen #,<,> etc.

```bash
$ echo 'include <iostream>' >hello.cpp
$ echo 'int main() {' >>hello.cpp
$ echo 'printf("\n\t*** Hallo Welt ***\n");' >>hello.cpp
$ echo 'return 0;' >>hello.cpp
$ echo '}' >>hello.cpp
```

Compiliere das C Programm mit folgendem Befehl in der Kommandozeile:

g++ -o hello hello.cpp
Das Programm kann so gestartet werden:

./hello
Mit Strich-Punkt (;) getrennt lassen sich auch 2 Befehle hintereinander inn der Kommandozeile schreiben – probiere auch das einmal aus:

g++ -o hello hello.cpp;./hello

### Übung (C in/out)
Auch selbstgeschriebene C Programme lesen von stdin und schreiben auf stdout. Und daher kann man auch hier die Dateiumleitung mit <, >, oder >> verwenden. Das Programm merkt davon gar nichts.

Erstelle eine Datei sum.cpp und öffne diese im Replit Editor.

Schreibe ein C Programm das zuerst eine Anzahl (int n) einliest.

Dann werden n weitere ganze Zahlen eingelesen und die Summe dieser Zahlen ermittelt.

Am Ende gibt das Programm die Summe aus (dies soll die einzige Ausgabe des Programms sein).
Beispiel-Programmablauf (n=3):

3
5
4
2
11
Bedeutung: Es sollen 3 Zahlen eingegeben werden, diese sind 5, 4 und 2. Deren Summe ist die Ausgabe 11.

Compiliere das Programm mit folgender Kommandozeile:
g++ -o sum sum.cpp
Wenn keine Compile-Fehler auftreten wird im gleichen Verzeichnis das Programm mit dem Namen sum erzeugt. Prüfe mit ls ob vorhanden.

Behebe evtl. Compiler-Fehler und starte dann das Programm mit:
./sum
Erstelle eine Textdatei mit den Input Daten für das Programm sum. Z.B.
5
1
2
3
4
5
Rufe nun das Programm auf und leite die Textdatei per Dateiumleitung ins stdin des Programms sum um. Schreibe weiters den Output des Programms in eine Textdatei.

#### Lösung
```bash
$ touch sum.cpp
```
In Sum.cpp
```cpp
#include <stdio.h>

int main()
{
int n = 0;
int var = 0;
int erg = 0;
scanf("%d", &n);
for(int i = 0; i < n; i++)
  {
    scanf("%d", &var);
    erg = var + erg;
  }
printf("%d\n", erg);
  return 0;
}
```
```cpp
$ ./sum < inputsum.txt > outputsum.txt
```
### Challenge (C in/out)
Recherchiere wie das vorhergehende Programm so erweitert werden kann damit die Anzahl als erster Wert nicht mehr notwendig ist, d.h. das Ende der Daten automatisch erkannt wird.

Hinweis: Es gibt das Konzept des End of File (EOF). Ist stdin die Tastatur so ist EOF Ctrl+D.
```bash
touch challengeCInOut.cpp
```
```cpp
#include <stdio.h>

int main()
{
 int b;
 int sum = 0;

 while(scanf("%d", &b) == 1)
   {
     sum += b;
   }

printf("%d", sum);

return 0;
}
```
```bash
g++ -o challengeCInOut challengeCInOut.cpp
./challengeCInOut 
```

Aufgaben für die ich keine zeit mehr hatte:


- Übung 2.8 (semikolon in command-line)
- Übung 2.9 (Here-Documents)# Arbeitsbericht vom 19.11.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Tools

## wget und head(+optionen für head)

### wget
Kann Dateien aus dem Internet mit einer URL herunterladen.

### head
gibt die ersten 10 Zeilen eines files aus.

### option -n oder --lines bei head
gibt eine bestimmte anzahl an zeilen aus z.B:
```bash
$ head -n3 shopping.txt
Fred apples 20
Susy oranges 5
Mark watermellons 12
```



## Übung 3.1 (head)
Zeige die ersten 5 Zeilen von /etc/passwd und die ersten 7 Zeilen von /etc/group.
Was passiert wenn bei head eine negative Zahl für die Anzahl der Zeilen verwendet wird? Was steht dazu in der manpage von head?

Das Minus gibt alle Zeilen bis auf die letzen Anzahl der Zeilen die man nach dem Minus eingegeben hat.

```bash
$ head -n5 /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
$ head -n7 /etc/group
root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:
tty:x:5:
disk:x:6:
~/workspace$ 
```
Erstelle eine Datei zahlen.txt mit den Zahlen von 1 bis 100 (100 Zeilen). Verwende dazu das Tool seq und Dateiumleitung (>). Zeige dann die ersten 10 Zeilen dieser Datei. Zeige mit einem weiteren Kommando alles bis auf die letzten 80 Zeilen.
```bash
$ touch zahlen.txt
$ seq 1 100 > zahlen.txt 
$ head -n10 zahlen.txt 
1
2
3
4
5
6
7
8
9
10
$ head -n-80 zahlen.txt 
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
```
Schreibe die ersten 7 Zeilen der Datei zahlen.txt in eine neue Datei anfang.txt.
```bash
$ head -n 7 zahlen.txt >anfang.txt
```
Zeige die ersten 8 Zeilen von mehreren Dateien gleichzeitig (/etc/passwd, /etc/group) in einer einzigen Kommandozeile.
```bash
$ head -n8 /etc/passwd /etc/group
==> /etc/passwd <==
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin

==> /etc/group <==
root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:
tty:x:5:
disk:x:6:
lp:x:7:
```
Nummeriere alle Zeilen von /etc/passwd mit Hilfe des Tools nl und schreibe das Ergebnis in eine Datei passwd_numbered. Zeige die ersten 12 Zeilen dieses Files an.
```bash
$ nl /etc/passwd >passwd_numbered
$ head -n12 passwd_numbered 
     1  root:x:0:0:root:/root:/bin/bash
     2  daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
     3  bin:x:2:2:bin:/bin:/usr/sbin/nologin
     4  sys:x:3:3:sys:/dev:/usr/sbin/nologin
     5  sync:x:4:65534:sync:/bin:/bin/sync
     6  games:x:5:60:games:/usr/games:/usr/sbin/nologin
     7  man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
     8  lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
     9  mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
    10  news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
    11  uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
    12  proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
```
Verwende seq so dass die Zahlen 1-30 mit _ getrennt in die Datei zahlen2.txt geschrieben werden. D.h. in der Form 1_2_3_4_5_6_7_…. Gib dann mit head so viele Zeichen davon wieder aus, dass der Text 1_2_3_4_5_6_7_8_9_10 ausgegeben wird.
```bash
$ seq -s _ 1 30 >zahlen2.txt
$ head -c 20 zahlen2.txt 
1_2_3_4_5_6_7_8_9_10
```
## Übung 3.2 (more / less)
Recherchiere über die Tools more und less. Für Versuche kann die folgende Datei verwendet werden:

/usr/share/common-licenses/LGPL-2.1

Probiere:

Zeilen-/Seitenweise bewegen

more:
Enter = eine Leerzeile
Space = eine Seite
b = geht eine Seite zurück

Beenden

more:
q = Beenden
less:
q = Beenden

Nach Text suchen und von einer gefundenen Stelle zur nächsten springen

Was ist der Unterschied zwischen less und more?

Mit der Aufgabe more / less bin ich nicht mehr fertig geworden.

### Die folgenden Übungen hatte ich keine Zeit mehr:

- Übung 3.3 (Wildcards)
- Übung 3.4 (find)
- Übung 3.5 (file)
- Übung 3.6 (tools)
- Übung 3.7 (cat)
- Übung 3.8 (date epoch# Arbeitsbericht vom 21.01.2026

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Github

- Zu Beginn erstellen wir einen Account auf Github
- Danach gehen wir zurück auf replit, öffnen einen neuen Tab und geben "Git" ein und öfnnen den Tab.
- Hier klicken wir oben rechts auf das zahnrad öffnen die Einstellungen, melden uns mit dem gerade erstellten Github Account an und geben den Github Link bei Remote ein.![image](image.png)
- Bei Github stellen wir https ein.
- Wir gehen wiedr zurück zu Replit und ![image](image_4.png)
- Hier schreiben wir einfach eine Message für das Comiten als summary und commiten die Änderungen
- Als nächstes gehen wir auf sync changes und gehen danach züruck auf Github
- Hier können wir unter actions anschauen wann unsere Änderungen Übernommen wurden und danach den Bericht als Link über Teams abgeben.# Arbeitsbericht vom 25.02.2025

- Name: Felix Resch
- Klasse: 2AHITS
- Gruppe 2
- Fach: ITSI Übungen
- Thema: Tools 2 (Teil 2)

## Übung 3.4 (find)

### Setze das Arbeitsverzeichnis auf ~/workspace und führe aus:

find -name "*.md"

### Ausgabe
```sh
~/workspace$ find -name "*.md*"
./README.md
./berichte/250917.md
./berichte/251001.md
./berichte/251015.md
./berichte/251105.md
./berichte/251119.md
./berichte/251217.md
./berichte/260121.md
./berichte/260225.md
```
Recherchiere zum find Befehl und löse folgende Aufgabenstellungen:

### Suche, von ~ (Homeverzeichnis) aus, nach

dem Directory mit dem Namen profiles
```sh
~$ find -name "profiles"
./.local/state/nix/profiles
```
dem File mit dem Namen .latest.json
```sh
~$ find -name ".latest.json"
./workspace/.local/state/replit/agent/.latest.json
```
allen Files die auf .json enden
```sh
~$ find -name "*.json"
./workspace/.cache/replit/env/latest.json
./workspace/.cache/replit/nix/dotreplitenv.json
./workspace/.cache/replit/toolchain.json
./workspace/.local/state/replit/agent/.latest.json
./workspace/.upm/store.json
~$ 
```
allen Directories
```sh
~$ find -type d
.
./.nix-defexpr
./.cache
./.cache/nix
./.cache/snowflake
./.local
./.local/state
./.local/state/nix
./.local/state/nix/profiles
./workspace
./workspace/.cache
./workspace/.cache/replit
./workspace/.cache/replit/modules
........
```
allen Markdown Files die in den letzten 4 Wochen geändert wurden
```sh
~$ find -mtime -28 -name "*.md"
./workspace/berichte/260121.md
./workspace/berichte/260225.md
```
allen Directories die in den letzten 4 Wochen geändert wurden
```sh
~$ find -mtime -28 -type d
.
./.cache
./.cache/snowflake
./workspace/.cache/replit
./workspace/.local/state/replit
./workspace/.git
./workspace/.git/refs/heads
./workspace/.git/refs/remotes/origin
./workspace/.git/objects
./workspace/.git/objects/c8
./workspace/.git/objects/e9
./workspace/.git/objects/d5
........
```
allen Directories die in den letzten 4 Wochen nicht geändert wurden
```sh
~$ find -mtime +28 -type d
./.nix-defexpr
./.cache/nix
./.local
./.local/state
./.local/state/nix
./.local/state/nix/profiles
./workspace
./workspace/.cache
...........
```
allen Dateien mit der Berechtigung 644. Recherchiere was diese Berechtigung (permission flags) bedeutet.
```sh
~$ find -perm 644 -type f
./.bash_logout
./.profile
./.nix-channels
./.cache/nix/binary-cache-v6.sqlite
./.cache/nix/binary-cache-v6.sqlite-journal
./.cache/nix/fetcher-cache-v1.sqlite-journal
./.cache/nix/fetcher-cache-v1.sqlite
./workspace/.cache/replit/modules/replit.res
./workspace/.cache/replit/modules/python-3.11.res
./workspace/.cache/replit/modules.stamp
./workspace/.cache/replit/env/latest
./workspace/.cache/replit/env/latest.json
./workspace/.cache/replit/toolchain.json
```
Suche im /usr Verzeichnis nach allen Dateien die größer als 2MB sind.
```sh
~$ find /usr -size +2M
/usr/lib/locale/locale-archive
/usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.33
/usr/lib/x86_64-linux-gnu/libcrypto.so.3
/usr/lib/x86_64-linux-gnu/libc.so.6
/usr/lib/x86_64-linux-gnu/libperl.so.5.38.2
/usr/lib/x86_64-linux-gnu/perl/5.38.2/auto/Encode/CN/CN.so
/usr/lib/x86_64-linux-gnu/perl/5.38.2/auto/Encode/JP/JP.so
/usr/lib/x86_64-linux-gnu/perl/5.38.2/auto/Encode/KR/KR.so
/usr/lib/x86_64-linux-gnu/perl/5.38.2/CORE/charclass_invlists.h
```

Lege in ~/workspace ein Unterverzeichnis an. Erzeuge darin einige Dateien mit der Endung txt und md mit etwas Inhalt. Lösche dann mit Hilfe eines find Befehls alle txt Dateien die weniger als 10 Bytes groß sind. Wähle den Test so, dass minestens 2 Dateien gelöscht und mindestens 2 Dateien überbleiben.
Hinweis: dafür ist die -exec Option zu verwenden.

Als erstes ein Unterverzeichnis anlegen, darin die Text und markdown dateien anlegen und mit dem Befehl:
```sh
stat inhalt1.txt
```
Die Bytegrößen überprüfen und dann mit dem Befehl die Dateien löschen:
```sh
find -type f -name "*.txt" -size -10c -exec rm {} \;
```
Schreibe einen find Befehl der den Inhalt aller Dateien mit Endung md zu einem neuen md File zusammenfügt.

Zeige von allen Dateien (aber nicht Directories) im Directory /var die den Text log irgendwo im Dateinamen haben die vollständige Information (ls -l) an, die Ausgabe sieht dann ca. so aus:

…
-rw-r--r-- 1 root root 259 Apr 28  2024 /var/lib/dpkg/info/logsave.md5sums
-rw-r--r-- 1 root root 33 May 30  2024 /var/lib/dpkg/info/login.conffiles
-rwxr-xr-x 1 root root 174 May 30  2024 /var/lib/dpkg/info/login.postrm
…

Schorscht 
# Hallo, Schorscht
nee
slow
9
0
leer
