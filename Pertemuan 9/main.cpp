#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "Masukan Angka: ";
    cin >> x;
    string nama;
    cout << "Nama Anda : " << endl;
    cin >> nama;
    cout << "Hai" << nama;
    cout << "Selamat datang!\n" << endl;
    cout << "Muhamad Azriel Yanuar \nA11.2022.14646" << endl;

    x = 0;
        do {
        if(x%5==0){
            cout << x << endl;
        }
            x++;
        }while(x <= 40);
    return 0;
}
