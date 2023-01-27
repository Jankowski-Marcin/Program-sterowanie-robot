class Interpolacja{
  private:
  Servo_motor Silnik;
  int16_t pos_aktualna;
  int16_t pos_zadana;
  int16_t pos_poczatkowa;
  int16_t delta;
  uint16_t liczba_krokow;
  uint16_t inc;
  public:
  bool state;
  
  public:
    Interpolacja(uint8_t pin_nbr, uint16_t pos):
    Silnik(pin_nbr,pos){
      pos_aktualna=pos;
      pos_zadana=pos;
      pos_poczatkowa=pos;
      delta=0;
      liczba_krokow=0;
      inc=0;
      state=1;
    }
    void zadaj_pozycje(int16_t pos, uint16_t steps){
      if(pos>500) pos=500;
      if(pos<0) pos=0;
      
      inc=0;
      liczba_krokow=steps;
      pos_zadana=pos;
      delta=(pos_zadana-pos_poczatkowa)/2;
      state=0;
    }
    int16_t next_step(void){
      if(inc==liczba_krokow){
        pos_poczatkowa=pos_zadana;
        pos_aktualna=pos_zadana;
        Silnik.set_position(pos_aktualna);
        state=1;
        return pos_aktualna;
      }
      ++inc;
      pos_aktualna=pos_poczatkowa+delta-delta*cos(PI/liczba_krokow*inc);
      Silnik.set_position(pos_aktualna);
      return pos_aktualna;
    }

  
};
