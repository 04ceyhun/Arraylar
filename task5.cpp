// task5.cpp - A və B massivlərində maksimum ədədləri tapıb yerini dəyişmək
#include <iostream>
using namespace std;

void swapMax(int A[], int B[], int n){
    int maxA = 0, maxB = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > A[maxA]) maxA = i;
        if(B[i] > B[maxB]) maxB = i;
    }
    int temp = A[maxA];
    A[maxA] = B[maxB];
    B[maxB] = temp;
}

int main(){
    const int n = 5;
    int A[n], B[n];

    cout << "A massivinin elementlerini daxil edin: ";
    for(int i = 0; i < n; i++) cin >> A[i];

    cout << "B massivinin elementlerini daxil edin: ";
    for(int i = 0; i < n; i++) cin >> B[i];

    swapMax(A, B, n);

    cout << "Deyismeden sonra A: ";
    for(int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;

    cout << "Deyismeden sonra B: ";
    for(int i = 0; i < n; i++) cout << B[i] << " ";

    return 0;
}
