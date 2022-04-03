#include <iostream>
using namespace std;

int main (){
     int n, p=1, s=0, F;
    cout << "inserire un valore intero: ";
    cin >> n;

    for (int i=0; i<n; i++){
        F= p+s;
        if (F<=n) {
            cout << F << endl;
        } else {
            break;
        }
        p=s;
        s=F;
    }
    return 0;
}
