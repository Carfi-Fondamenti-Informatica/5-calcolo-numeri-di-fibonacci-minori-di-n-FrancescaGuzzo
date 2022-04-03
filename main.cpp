#include <iostream>
using namespace std;

int Fibonacci (int n){
    int p=1, s=0, F;
    for (int i=0; i<n; i++){
        F= p+s;
        if (F<=n) {
            cout << F << endl;
        }
        p=s;
        s=F;
    }
    return F;

}

int main (){
    int a;
    cout << "inserire un valore intero: ";
    cin >> a;
    int risultato= Fibonacci(a);
    return 0;
}
