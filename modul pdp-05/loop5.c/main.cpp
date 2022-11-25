#include <iostream>

using namespace std;

int main()
{
    cout << "Program ini akan berhenti jika Anda memasukan Angka -99" << endl;
   for (int x;;){
    cout << "masukan nilai anda  :";
    cin >> x;
    if (x == -99){
        break;
    }
   }
   cout << "\nKeluar karena break"<< endl;
    return 0;
}
