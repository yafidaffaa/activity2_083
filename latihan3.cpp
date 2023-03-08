#include <iostream>
using namespace std;

double P, L;


void input(){

cout << "Masukan Panjangnya : ";
cin >> P;

cout << "Masukan Lebarnya : ";
cin >> L;

}

double proses(){

    return P*L;

}

double proses2(double a, double b){
    return a*b;
}

void output(){

    cout << "Luasnya : " << proses() ;
    cout << "\nLuasnya yang ke 2 : " << proses2(P,L);

}

int main(){

    input();
    output();

}

