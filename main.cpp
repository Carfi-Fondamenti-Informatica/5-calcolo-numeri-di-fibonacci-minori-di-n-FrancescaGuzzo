#include <iostream>
using namespace std;

int main (){
    int n, p=1, s=0, F;
    cout << "inserire un valore intero: ";
    cin >> n;
    int i=0;
    while (i<n){
        F= p+s;
        if (F<=n) {
            cout << F << endl;
        } else {
            break;
        }
        p=s;
        s=F;
        i++;
    }
    return 0;
}
