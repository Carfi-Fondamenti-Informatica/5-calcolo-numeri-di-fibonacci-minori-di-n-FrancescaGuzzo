#include <iostream>
using namespace std;

int main (){
     int n, p=1, s=0, F=0;
    cout << "inserire un valore intero: " << endl;
    cin >> n;

    while (F<=n){
        F= p+s;    
        cout << F << endl;
        p=s;
        s=F;
    }
    return 0;
}
