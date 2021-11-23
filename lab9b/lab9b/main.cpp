#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int masA[100][100];
    int masB[100][100];
    int masC[100][100];
    int N;
    int M;
    int S;
    int L;
    cout << "Введите размерность массива" << endl;
    cout << "i: ";
    cin >> N;
    cout << "j: ";
    cin >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            masA[i][j] = rand()%10+1;
            cout << setw(3) << masA[i][j];
        }
        cout << endl;
    }
    cout<<endl;
    cout << "Введите размерность массива" << endl;
    cout << "i: ";
    cin >> S;
    cout << "j: ";
    cin >> L;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < L; j++) {
            masB[i][j] = rand()%10+1;
            cout << setw(3) << masB[i][j];
        }
        cout << endl;
    }
    cout<<endl;
    if (M == S) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                masC[i][j] = 0;
                for (int k = 0; k < M; k++) {
                    masC[i][j] += masA[i][k] * masB[k][j];
                }
            }
        }
        cout << "Произведение массивов: " << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << setw(6) << masC[i][j];
            }
            cout << endl;
        }
    }
    else
        cout << "Что-то пошло не так";
    
    return 0;
}
