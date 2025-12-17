#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int data[10];
    srand(time(0));

    cout << "Data awal:\n";
    for (int i = 0; i < 10; i++) {
        data[i] = rand() % 100;
        cout << data[i] << " ";
    }
    cout << "\n\nProses Bubble Sort:\n";

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);

                for (int k = 0; k < 10; k++)
                    cout << data[k] << " ";
                cout << endl;
            }
        }
    }

    return 0;
}

