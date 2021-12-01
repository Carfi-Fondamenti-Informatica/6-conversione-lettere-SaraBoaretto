#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char a=0;
  cin >> a;
  char c= uno(a);
  if (c==1){
    cout << "errore" <<endl;
   }else{
    cout << c <<endl;
    }
  
}
