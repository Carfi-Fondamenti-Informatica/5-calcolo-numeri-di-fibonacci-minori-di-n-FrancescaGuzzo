#include <iostream>
using namespace std;

int main() {
   int n, p=1, s=0, F;
    cout << "inserire un valore intero: ";
    cin >> n;

    for (int i=0; i<n; i++){
            F= p+s;
            s=p;
            p=F;
        if (s<=n) {
            cout << s << endl;
    }
    }
   return 0;
}
