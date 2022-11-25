#include <iostream>

using namespace std;

int main()
{
int x , maxx, minn ;
for(int x = 0;; x++){
    cin >> x;
    if(x > maxx){
        maxx = x;
    }
    if(x < minn && x != -99){
        minn = x;
    }
    if(x == -99){
        cout << "maxx  =  " << maxx << endl;
        cout << "minn  =  " << minn << endl;
        break;
    }
}
return 0;
}
