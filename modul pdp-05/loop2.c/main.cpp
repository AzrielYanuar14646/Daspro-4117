#include <iostream>

using namespace std;

int main()
{
    int x;
    for (int x = 2; x <= 100; x++){
        if (x % 2 == 1 ){
            continue;
        }
        cout << "Nilai genap adalah " << x << endl;
   }
    return 0;
}

