char uno (char b){
  bool r;
  char d;
  if ((b>=65 && b<=90)||(b>=97 && b<=122)){
    r = true;
    if ((b>=65) && (b<=90)){
      d= b+32;
      }else if ((b>=97) && (b<=122)){
      d=b-32;
      }
    }else{
    r=false;
    d=1;
    }
  return d;
  
  }
    
    
   
