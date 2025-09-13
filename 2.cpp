#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << "IMT (INDEKS MASSA TUBUH)" << endl;
  cout << endl;

  float b, t, IMT;

  cout << "Masukan nilai berat badan dan tinggi badan: " << endl;
  cout << "Masukkan berat badan (kg): ";
  cin >> b;
  cout << "Masukkan tinggi badan (m): ";
  cin >> t;

  IMT = b / (t * t);
  cout << endl;
  cout << "Berat badan (kg)\t: " << b << endl;
  cout << "Tinggi badan (kg)\t: " << t << endl;
  cout << "IMT : " << setprecision(4) << IMT << "\t(Termasuk ";
  
  if (IMT <= 18.5) {
    cout << "kurus)" << endl;
  } else if (IMT <= 25) {
    cout << "normal)" << endl;
  } else if (IMT <= 30 ) {
    cout << "gemuk)" << endl;
  } else {
    cout << "kegemukkan)" << endl;
  }
  
  return 0;
}