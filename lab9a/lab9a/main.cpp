#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int N = 4;
    const int M = 4;
    int mas[N][M];
    cout << "Изначальный массив:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            mas[i][j] = rand()%10+1;
            cout << setw(3) << mas[i][j];
        }
        cout<<endl;
    }
    int max = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (mas[i][j] >= mas[i][max]) {
                max = j;
            }
        }
        int t = mas[i][0];
        mas[i][0] = mas[i][max];
        mas[i][max] = t;
        cout<<endl;
    }
    cout << "Измененный массив: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << setw(3) << mas[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout << "Изначальный массив:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            mas[i][j] = rand()%10+1;
            cout << setw(3) << mas[i][j];
        }
        cout<<endl;
    }
    
    int min = 0;
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (mas[i][j] <= mas[min][j]) {
                min = i;
            }
        }
        int t = mas[N-1][j];
        mas[N-1][j] = mas[min][j];
        mas[min][j] = t;
        cout<<endl;
    }
    cout << "Измененный массив: " << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            cout << setw(3) << mas[i][j];
        }
        cout<<endl;
    }
    return 0;
}
