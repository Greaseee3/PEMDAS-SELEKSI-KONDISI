#include <iostream>
using namespace std;

int main() {
  int gawe;
  int upah = 0, lembur = 0, denda = 0;

  cout << "Jam Kerja: ";
  cin >> gawe;

  if (gawe >= 50 && gawe <= 60) {
    upah = gawe * 5000;
    lembur = 0;
    denda = 0;
  } else if (gawe > 60) {
    upah = 60 * 5000;
    lembur = (gawe - 60) * 6000;
    denda = 0;
  } else if (gawe < 50) {
    upah = gawe * 5000;
    lembur = 0;
    denda = (50 - gawe) * 1000;
  }

  int total = upah + lembur + denda;

  cout << "Upah\t= Rp. " << upah << endl;
  cout << "Lembur\t= Rp. " << lembur << endl;
  cout << "Denda\t= Rp. " << denda << endl;
  cout << "-----------------------" << endl;
  cout << "TOTAL\t= Rp. " << total << endl;

  return 0;
}