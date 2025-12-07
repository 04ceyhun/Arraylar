// task7.cpp - x[i] = y[i]^2 olan elementləri tapmaq
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Massivin sayini daxil edin: ";
    cin >> n;

    int x[100], y[100];
    cout << "x massivini daxil edin: ";
    for(int i = 0; i < n; i++) cin >> x[i];

    cout << "y massivini daxil edin: ";
    for(int i = 0; i < n; i++) cin >> y[i];

    cout << "x[i] = y[i]^2 olan elementler:\n";
    for(int i = 0; i < n; i++){
        if(x[i] == y[i]*y[i]){
            cout << "x[" << i << "] = " << x[i] << " = y[" << i << "]^2\n";
        }
    }

    return 0;
}
