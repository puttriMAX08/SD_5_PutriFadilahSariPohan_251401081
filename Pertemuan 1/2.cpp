// Visualisasi Array
#include <iostream>
using namespace std;

int main() {
    system("cls");
    int x;
    int m1[2][2];

    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa ke - " << i+1 << "\n";
        for (int j=0; j<2; j++) {
            cin >> x;
            m1[i][j] = x;
        }
        cout << endl;
    }
}