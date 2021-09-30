#include <iostream> // dyrektywa wklejenia kodu iostream
using namespace std;

int main(){
  // TABLICE JEDNOWYMIAROWE
  // tablica statyczna - ze z góry ustaloną pulą miejsc
  int a{10};
  int tab1[3];
  int tab2[3] = {10,20,30};
  int tab3[] = {100, 200, 300}; // tablica zainicjowana przyjmuje ilosc miejsc z rozmiaru inicjalizatora

  cout << tab2[0] << tab2[1] << tab2[2];

  cout << &tab2[0] << &tab2[1] << &tab2[2]; // & przed nazwa obiektu pokazuje jego polozenie w pamieci

  // TABLICE DWUWYMIAROWE
  int tab5[2][3]; // dwa bloki trzy-cyfrowe // czytanie od prawej - ilość cyfr na blok, ilość bloków
  /*
  tab5[0][0], tab5[0][1], tab5[0][2] | tab5[1][0], tab5[1][1], tab5[1][2]
  */
  int tab6[2][3] = {{1,2,3},{4,5,6}};
  // int tab6[2][3] = {1,2,3,4,5,6}; // tab6 = tab6 !!
  // int tab7[][3]; nie wie ile bytów
  // int tab7[][]; nie wie ile bytów

  // TABLICE TRÓJWYMIAROWE
  int tab8[3][3][3];

  // HW
  // zadania z lab2 do rozwiązania
  // za dwa tygodnie kartkówka rozruchowa
}