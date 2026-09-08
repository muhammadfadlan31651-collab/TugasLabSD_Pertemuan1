#include <iostream>
using namespace std;
 
int main() {
    int data[3][3][4];
    int angka = 2;
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                data[i][j][k] = angka;
                angka += 2;
            }
        }
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                cout << data[i][j][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
 
    return 0;
}
