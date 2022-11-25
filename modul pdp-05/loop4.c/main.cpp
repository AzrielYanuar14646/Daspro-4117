#include <iostream>

using namespace std;

int main()
{
    float jumlah, rata;
    int x;
    for(x = 1; x <= 20; x++){
        jumlah = jumlah + x;
        rata = jumlah / x;
        cout << x << endl;
    }
    cout << endl;
    cout << " jumlah    ="  << jumlah << endl;
    cout << " rata-rata =" << rata << endl;
    return 0;
}
