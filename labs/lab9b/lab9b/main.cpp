#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int masA[100][100];
    int masB[100][100];
    int masC[100][100];
    int N;
    int M;
    int S;
    int L;
    while (true){
        cout << "Укажите размерность массива: " << endl;
        cout << "i:";
        cin >> N;
        cout << "j:";
        cin >> M;
        cout << "MasA:" << endl;
        for ( int i = 0; i < N; ++i) {
            for ( int j = 0; j < M; ++j){
                masA[i][j] = rand() % 10 + 1;
                cout << setw(3) << masA[i][j];
            }
            cout << endl;
        }
        cout << "Укажите размерность массива: " << endl;
        cout << "i:";
        cin >> S;
        cout << "j:";
        cin >> L;
        cout << "MasB:" << endl;
        for (int i = 0; i < S; ++i) {
            for (int j = 0; j < L; ++j) {
                masB[i][j] = rand() % 10 + 1;
                cout << setw(3) << masB[i][j];
            }
            cout << endl;
        }
        if (M == S){
            cout << "MasC = " << endl;
            for (int i = 0; i < N; ++i) {
                for (int j = 0; j < L; ++j) {
                    masC[i][j] = 0;
                    for (int f = 0; f < S; ++f) {
                        masC[i][j] += masA[i][f] * masB[f][j];
                    }
                    cout << setw(6) << masC[i][j];
                }
                cout << endl;
            }
        }
        else {
           cout << " Количество столбцов не соответствует количеству строк" << endl;
        }
    }
  return 0;
}
