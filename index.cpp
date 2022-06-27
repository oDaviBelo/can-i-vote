#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if(N >= 18) {
        cout<< "pode votar e ser presa" << endl;
    }
    else if(N >= 16) {
        cout<< "pode votar" << endl;
    }
    else if(N < 16) {
        cout<< "não pode votar nem ser presa" << endl;
    }

    return 0;
}