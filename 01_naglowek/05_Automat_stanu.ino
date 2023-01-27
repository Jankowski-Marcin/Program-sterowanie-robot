void automat_stanu(void){
  out1=out1&in1;
  out2=out2&in2;
  on_pos=Obrotnica.state & Ramie.state & Przedramie.state & Efektor.state;
  switch(stan){
    case 0: 
      K=0; Z=0;
      if(on_pos & in1 & !out1){
        stan=11;
        pozycja(KN1,30);
      }
      if(on_pos & in2 & !out2){
        stan=21;
        pozycja(KD1,30);
      }
    break;
    /////////////////////////////////////////////Obsługa sortowni i stacj #1
    case 11:
      K=0; Z=0;
      if(on_pos){
        ++stan;
        pozycja(KN2,10);
      }
    break;

    case 12:
      K=0; Z=0;
      if(on_pos){
        ++stan;
        Tim=T1;
      }
    break;

    case 13:
      K=1; Z=0;
      if(!Tim){
        ++stan;
        pozycja(KN1,10);  
      }
    break;
    
    case 14:
      K=1; Z=0;
      if(on_pos){
        ++stan;
        pozycja(SK1,50);  
      }
    break;  

    case 15:
      K=1; Z=0;
      if(on_pos){
        ++stan;
        pozycja(SK2,50);  
      }
    break;  

    case 16:
      K=1; Z=0;
      if(on_pos){
        out1=1;
        ++stan;
        Tim=T2;
      }
    break;

    case 17:
      K=0; Z=1;
      if(!Tim){
        
        stan=0;
        pozycja(Baz,40);  
      }
    break;
    /////////////////////////////////////////////Obsługa sortowni i stacj #1
    case 21:
      K=0; Z=0;
      if(on_pos){
        ++stan;
        pozycja(KD2,10);
      }
    break;

    case 22:
      K=0; Z=0;
      if(on_pos){
        ++stan;
        Tim=T1;
      }
    break;

    case 23:
      K=1; Z=0;
      if(!Tim){
        ++stan;
        pozycja(KD1,10);  
      }
    break;
    
    case 24:
      K=1; Z=0;
      if(on_pos){
        ++stan;
        pozycja(SD1,50);  
      }
    break;  

    case 25:
      K=1; Z=0;
      if(on_pos){
        ++stan;
        pozycja(SD2,40);  
      }
    break;  

    case 26:
      K=1; Z=0;
      if(on_pos){
        out2=1;
        ++stan;
        Tim=T2;
      }
    break;

    case 27:
      K=0; Z=1;
      if(!Tim){
        
        ++stan;
        pozycja(SD1,30);  
      }
    break;

    case 28:
      K=0; Z=1;
      if(on_pos){
        stan=0;
        pozycja(Baz,20);  
      }
    break;
  }
}
