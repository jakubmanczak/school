#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int tablica[20][2];
  int odlegla1,odlegla2;
  int odlegla1x,odlegla1y,odlegla2x,odlegla2y;

  for(int i = 0; i < 20; i++){
    int pitagoras = sqrt(
      ( tablica[i][0]*tablica[i][0] ) 
      + ( tablica[i][1]*tablica[i][1] )
    );

    if(pitagoras > odlegla1){
      odlegla1x = tablica[i][0];
      odlegla1y = tablica[i][1];
    }else if(pitagoras > odlegla2){
      odlegla2x = tablica[i][0];
      odlegla2y = tablica[i][1];
    }
  }

  cout << "odlegla1 to punkt: " << odlegla1x << " " << odlegla1y;
  cout << "odlegla 2 to punkt: " << odlegla2x << " " << odlegla2y;
}