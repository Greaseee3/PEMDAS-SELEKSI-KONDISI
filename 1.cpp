#include <iostream>
using namespace std;

int main() {
  int bangunruang;
  cout << "MENU : " << endl;
  cout << "1. menghitung luas dan keliling persegi panjang" << endl;
  cout << "2. menghitung luas dan keliling lingkaran" << endl;
  cout << "3. menghitung luas dan keliling segitiga" << endl;
  int pilihan;
  cout << "Masukan pilihan : ";
  cin >> pilihan;

  switch(pilihan) {
    case 1 : {
      int p, l;
      cout << "Masukan p : ";
      cin >> p;
      cout << "Masukan l : ";
      cin >> l;

      cout << "Keliling persegi panjang\t: " << 2 * (p + l) << " cm" << endl;
      cout << "Luas persegi panjang\t\t: " << p * l << " cm" << endl;
      break;
      }
    case 2 : {
      const float PI = 3.14f;
      int r;

      cout << "Masukan r : ";
      cin >> r;

      cout << "Keliling lingkaran\t: " << 2 * PI * r << " cm" << endl;
      cout << "Luas lingkaran\t\t: " << PI * r * r << " cm" << endl;
      break;
      }
    case 3 : {
      int a, b, c, alas, tinggi;

      cout << "Masukan a : ";
      cin >> a;
      cout << "Masukan b : ";
      cin >> b;
      cout << "Masukan c : ";
      cin >> c;
      cout << "Masukan alas : ";
      cin >> alas;
      cout << "Masukan tinggi : ";
      cin >> tinggi;

      cout << "Keliling segitiga\t: " << a + b + c << " cm" << endl;
      cout << "Luas segitiga\t\t: " << 0.5 * alas * tinggi << " cm" << endl;
      break;
      }
    default : cout << "Data tak ditemukan, program dihentikan ..." << endl;
  }
  
  return 0;
}