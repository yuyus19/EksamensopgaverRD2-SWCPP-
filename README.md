
#Eksamensopgave i RD2-SWC13. august 2019

Alle hjælpemidler, som ikke kræver brug af internet, er tilladt. Aflevering   skal   afleveres   én   PDF-fil   med   opgavebesvarelsen   i   C++-delen   og   én   PDF-fil   med   opgavebesvarelsen  i  Softwareudviklingsdelen.  Desuden  skal  al  kildekode  afleveres  i  en  zip-fil. En komplet aflevering indeholder altså 3 filer.Til hver C++ opgave er der en test-kode, som skal eksekveresog et screendump skal indsættes i afleveringen.  Hvis  programmet  ikke  kan  compile,  så  indsættes  i  stedet  fejlmeddelelsen  fra compileren. Enhver form for kopier/indsæt (copy/paste) fra tidligere opgaver anses som eksamenssnyd. Testkode fra denne eksamensopgave må dog gerne kopieres ind. Opgavesættet  består  af  7  sider,  1  forside,  5  sider  med  C++  opgaver  og  1  side  med  software-udviklingsopgaven.

## Opgave 1 (1-1½ time, 35 point) 
I denne opgave skal klassen Ticket implementeres. Klassen Ticket må ikke benytte klassen std::string og skal i stedet benytte char-arrays. 

class Ticket{ 
public:Ticket(); 
private:    
int mTheater;    
int mTicketNo;    
double mPrice;    
char mDate[11];     
char mTime[6];     
char* mSeat;    
char* mMovie;    
bool m3D;
}; 

Member variablene repræsenterer sal, billetnr, pris, dato, tidspunkt, sæde, film og om det er 3D-film (i rækkefølge fra ovenstående). Bemærk, at der i denne opgave skal benyttes to typer af C-style strings som hhv. er et char array med fast størrelse samt to strenge af variabel størrelse (sæde og film).HINT: Husk at C-style strings er termineret med et null-tegn. 

a) Implementer constructor, copy og move constructorI første del af opgaven skal constructor og destructor implementeres. Implementer desuden get/set funktionerne til alle member-variablene. Her lægges der vægt på korrekt brug af const samt korrekt brug af char-arrays. Alle get-funktioner skal returnere const-pointere/referencer i de tilfælde, hvor der ikke er tale om simple datatyper. På samme måde skal set-metoderne acceptere const-parametre.Det er et krav, at set-metoderne for dato og tid laver kontrol af input-formatet. Hvis formatet er ukorrekt skal input afvises. Datoen behøver ikke være gyldig, men skal følge formatet DD-MM-YYYY (altså dag-måned-år). Tidspunktet skal følge formatet HH:MM (altså timer:minutter). For både tid og dato kan alle ascii-karakterer accepteres men bindestreg og kolon skal være på korrekte positioner. Dvs. datoen 1A-13-2040 må gerne accepteres som gyldig. Set-metoderne for sæde og film skal kontrollere, at input-strengen eksisterer.

b) Tilføj operatorerTilføj følgende operatorer til klassen•Copy constructor•Move constructor•Copy assignment•Move assignment
