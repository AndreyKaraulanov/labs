#include"file.hpp"

int main(void) {
    while (true) {
        int n;
        cout << "Введите количество символов строки" << endl;
        cin >> n;
        cin.get();  // пропускаем символ '\n' который остался от ввода n
        char* s1 =new char[n+1];
        char* s2=new char[n+1]; /* источник и результат */
        cout << "Введите строку" << endl;
        cin.getline(s1,n+1);
        Word(s1, s2);
        for (int i = 0; i < strlen(s2); i++) {
            cout << *(s2+i) ;
        }
        cout << endl;
        delete[]s1;
        delete[]s2;
    }
}
