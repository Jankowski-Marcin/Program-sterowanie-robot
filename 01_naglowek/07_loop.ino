
void loop() {
  while(millis()-t0 < 10){
    
  }
  t0=millis();
  comunication();

  automat_stanu();

  Obrotnica.next_step();
  Ramie.next_step();
  Przedramie.next_step();
  Efektor.next_step();
  Kompresor.set(K);
  Zawor.set(Z);
  if(Tim) --Tim;
}
