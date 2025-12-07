// task2.cpp - Müsbət ədədlər arasında ən kiçiyini tapan funksiya (1-ci kurs səviyyəsi)
#include <iostream>
using namespace std;

int minPositive(int a[], int n){
    int minPos = -1;

    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            if(minPos == -1 || a[i] < minPos){
                minPos = a[i];
            }
        }
    }

    return minPos;
}

int main(){
    int n;
    cout << "Massivin sayini daxil edin: ";
    cin >> n;

    int a[100];
    cout << "Massivin elementlerini daxil edin: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int result = minPositive(a, n);

    if(result == -1)
        cout << "Massivde musbet eded yoxdur.";
    else
        cout << "En kicik musbet eded: " << result;

    return 0;
}
