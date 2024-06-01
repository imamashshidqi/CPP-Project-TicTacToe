#include <iostream>
#include <time.h>
#include <string>

using namespace std;
string number[9]={"1","2","3","4","5","6","7","8","9"};

void tampilan(){
    system("cls");
    cout << "       Selamat Datang di Game      " << endl;
    cout << "           Tic Tac Toe             " << endl;
    cout << "___________________________________" << endl;
    cout << " " << endl;
    cout << "   Player Pro (\x1B[34mX\033[0m) VS Player Noob (\x1B[31mO\033[0m)    \n" << endl;
    cout << "         _____ _____ _____ " << endl;
    cout << "        |     |     |     |" << endl;
    cout << "        |  " << number[0] << "  |  " << number[1] << "  |  " << number[2] << "  |" << endl;
    cout << "        |_____|_____|_____|" << endl;
    cout << "        |     |     |     |" << endl;
    cout << "        |  " << number[3] << "  |  " << number[4] << "  |  " << number[5] << "  |" << endl;
    cout << "        |_____|_____|_____|" << endl;
    cout << "        |     |     |     |" << endl;
    cout << "        |  " << number[6] << "  |  " << number[7] << "  |  " << number[8] << "  |" << endl;
    cout << "        |_____|_____|_____| " << endl;
    cout << "\n" << endl;
}

int hasil(){
    if(number[0] == number[1] && number[1] == number[2]){
        return 1;
    }
    if(number[3] == number[4] && number[4] == number[5]){
        return 1;
    }
    if(number[6] == number[7] && number[7] == number[8]){
        return 1;
    }
    if(number[0] == number[3] && number[3] == number[6]){
        return 1;
    }
    if(number[1] == number[4] && number[4] == number[7]){
        return 1;
    }
    if(number[2] == number[5] && number[5] == number[8]){
        return 1;
    }
    if(number[0] == number[4] && number[4] == number[8]){
        return 1;
    }
    if(number[2] == number[4] && number[4] == number[6]){
        return 1;
    }
    else if(number[0] != "1" && number[1] != "2" && number[2] != "3" && number[3] != "4" && number[4] != "5" && number[5] != "6" && number[6] != "7" && number[7] != "8" && number[8] != "9"){
        return -1;
    }
    else{
        return 0;
    }
}

int main() {
    int play = 1, nilaiHasil, pilihan, pilihan1;
    string pemain[2] = {"Player Pro", "Player Noob"};
    string karakter;

    do {
        mainLagi:
        tampilan();

        play=(play%2)?1:2;

        if(play == 1 && pemain[0] == "Player Pro"){
            cout << " " << "Giliran (" << pemain[0] << ") Pilih Kotak Nomer Berapa? : ";
            cin >> pilihan;
            
            karakter = "\x1B[34mX\033[0m";

            if(pilihan == 1 && number[0] == "1"){
                number[0] = karakter;
            }else if(pilihan == 2 && number[1] == "2"){
                number[1] = karakter;
            }else if(pilihan == 3 && number[2] == "3"){
                number[2] = karakter;
            }else if(pilihan == 4 && number[3] == "4"){
                number[3] = karakter;
            }else if(pilihan == 5 && number[4] == "5"){
                number[4] = karakter;
            }else if(pilihan == 6 && number[5] == "6"){
                number[5] = karakter;
            }else if(pilihan == 7 && number[6] == "7"){
                number[6] = karakter;
            }else if(pilihan == 8 && number[7] == "8"){
                number[7] = karakter;
            }else if(pilihan == 9 && number[8] == "9"){
                number[8] = karakter;
            }else{
                play--;
            }
        }else if(play == 2 && pemain[1] == "Player Noob"){
            cout << " " << "Giliran " << pemain[1] << " Pilih Kotak Nomer Berapa? : ";
            cin >> pilihan1;

            karakter = "\x1B[31mO\033[0m";

            if(pilihan1 == 1 && number[0] == "1"){
                number[0] = karakter;
            }else if(pilihan1 == 2 && number[1] == "2"){
                number[1] = karakter;
            }else if(pilihan1 == 3 && number[2] == "3"){
                number[2] = karakter;
            }else if(pilihan1 == 4 && number[3] == "4"){
                number[3] = karakter;
            }else if(pilihan1 == 5 && number[4] == "5"){
                number[4] = karakter;
            }else if(pilihan1 == 6 && number[5] == "6"){
                number[5] = karakter;
            }else if(pilihan1 == 7 && number[6] == "7"){
                number[6] = karakter;
            }else if(pilihan1 == 8 && number[7] == "8"){
                number[7] = karakter;
            }else if(pilihan1 == 9 && number[8] == "9"){
                number[8] = karakter;
            }else{
                play--;
            }
        }
        nilaiHasil = hasil();
        play++;
    }while(nilaiHasil==0);
    tampilan();
    if(nilaiHasil==1){
        play--;
        if(play == 1){
            cout << "   " << pemain[0] << " Menang!!!" << endl;
            cout << "   " << pemain[1] << " Kalah wooo!!" << endl;
        }else {
            cout << "   " << pemain[1] << " Menang!!!" << endl;
            cout << "   " << pemain[0] << " Kalah wooo!!!" << endl;
        }
    }else if(nilaiHasil == -1){
        cout << "   " << "Game Berakhir Seri!" << endl;
    }

    char mainLagi;
    cout << "\n   " << "Apakah Kamu Ingin Bermain Lagi? (y/n) ";
    cin >> mainLagi;
    if(mainLagi == 'Y' || mainLagi == 'y'){
        nilaiHasil = 0;
        for(int i=0;i<9;i++){
            number[i] = to_string(i+1);
        }
        goto mainLagi;
    }else{
        cout << "\n   " << "Terimakasih Sudah Bermain Bersamaku!";
    }
    return 0;
}