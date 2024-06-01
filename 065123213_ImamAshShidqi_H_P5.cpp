#include <iostream>
using namespace std;

int main() {
    char huruf;

    cout << "Tugas Pertemuan ke-5 Praktikum Algoritma" << endl;
    cout << "Nama : Imam Ash Shidqi" << endl;
    cout << "NPM : 065123213" << endl;
    cout << "Kelas : H" << endl;
    cout << "Masukan Huruf : ";
    cin >> huruf;

    if ((huruf >= 'a' && huruf <= 'z') || (huruf >= 'A' && huruf <= 'Z')) {
        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' | huruf  == 'o' || huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O'){
            cout << huruf << "Ini Huruf Vokal" << endl;
        } else {
            cout << huruf << "Ini Huruf Konsonan" << endl;
        } 
    } else {
        cout << "Ini Bukan Huruf!!" << endl;
    }
    return 0;
}