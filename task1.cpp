// task1.cpp - Massivi azalan sira ile siralama 
#include <iostream>
using namespace std;

void sortDescending(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int n;
    cout << "Massivin element sayini daxil edin: ";
    cin >> n;

    int a[100];
    cout << "Massivin elementlerini daxil edin: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sortDescending(a, n);

    cout << "Azalan siralanmis massiv: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
