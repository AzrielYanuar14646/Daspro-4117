#include <iostream>

using namespace std;

int main()
{
    cout << "Program Perhitungan Luas Lingkaran" << endl;
    cout << "\nMuhamad Azriel Yanuar \nA11.2022,14646 \n4117" << endl;

    float r;
    float phi;

    phi = 3.14;

    cout << "Masukan jari-jari Lingkaran: ";
    cin >> r;
    cout << "X = phi x r^2 \nX = " << phi * r * r << endl;
    cout << "Luas Lingkaran adalah = " << phi * r * r << endl;

    return 0;
}
