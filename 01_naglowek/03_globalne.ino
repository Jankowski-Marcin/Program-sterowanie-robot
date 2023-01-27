//serwa
Interpolacja Obrotnica(12,265);
Interpolacja Ramie(11,500);
Interpolacja Przedramie(13,50);
Interpolacja Efektor(10,250);

//Piny IO
Arduino_pin Kompresor(6);
Arduino_pin Zawor(5);

//Timer
uint8_t Tim=0;
uint32_t t0=0;

//wyjścia
bool K=0;
bool Z=0;

//stan
uint8_t stan=0;
//
bool on_pos=1;
//semafory
uint8_t sem_in=0;
uint8_t sem_out=0;

bool in1=0;
bool in2=0;

bool out1=0;
bool out2=0;


//Pozycje             {  O,  R,  P,  E}   O-obrotnica, R-ramie, P-przedramie, E-efektor

const uint16_t Baz[4]={265,500, 50,250};

const uint16_t KN1[4]={121,473, 69,410};  //Karuzela nadwozia pozycja#1
const uint16_t KN2[4]={121,454,101,410};  //Karuzela nadwozia pozycja#2

const uint16_t KD1[4]={395,431,125,300};  //Karuzela dachy pozycja#1
const uint16_t KD2[4]={395,420,170,300};  //Karuzela dachy pozycja#2

const uint16_t SK1[4]={207,500, 50, 30};  //Stacja nadwozia pozycja#1
const uint16_t SK2[4]={207,340, 41, 30};  //Stacja nadwozia pozycja#2

const uint16_t SD1[4]={360,430, 31,225};  //Stacja dachy pozycja#1 
const uint16_t SD2[4]={325,323, 31,225};  //Stacja dachy pozycja#2
