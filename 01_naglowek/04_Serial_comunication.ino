void comunication(void){
  if(Serial.available()){
    sem_in=Serial.read()-'0';
  }
  in1=sem_in&1;
  in2=sem_in&2;
  sem_out=out1|(out2<<1);
  Serial.print(sem_out);

}

void pozycja(uint16_t arr[4],uint16_t kroki){
  Obrotnica.zadaj_pozycje(arr[0],kroki);
  Ramie.zadaj_pozycje(arr[1],kroki);
  Przedramie.zadaj_pozycje(arr[2],kroki);
  Efektor.zadaj_pozycje(arr[3],kroki);
  
}
