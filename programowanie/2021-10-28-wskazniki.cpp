#include <iostream>
using namespace std;

int main(){
  int a; // wskaźnik - &a
  int b = 10; // wskaźnik - &b

  cout << "\n" << endl;

  cout << "a: " <<  a << " " << &a << endl;
  cout << "b: " <<  b << " " << &b << endl;

  a = 100;
  int * a_ptr; // typ 'int *' definiuje obiekt którego wartością jest adres zmiennej intowej
  int * b_ptr;

  a_ptr = new int {100}; // a_ptr przechowuje kontener na inta
  b_ptr = new int;

  cout << endl;
  cout << "a: " << a << " " << &a << endl;
  cout << "b: " << b << " " << &b << endl;
  cout << "a_ptr: " << a_ptr << endl;
  cout << "b_ptr: " << b_ptr << endl;

  return 0;
}