#include"file.hpp"

int main(void) {
    while (true) {
        int n, a, b;
        cout << "Введите количество символов строки" << endl;
        cin >> n;
        cin.get();  // пропускаем символ '\n' который остался от ввода n
        char* s1 =new char[n+1];
        cout << "Введите строку" << endl;
        cin.getline(s1,n+1);
        cout << "Введите позицию, с которой хотите удалить символы";
        cin >> a;
        cout << "Введите количество элементов, которое хотите удалить";
        cin>>b;
        Delete(s1, a, b);
        cout << endl;
        delete[]s1;
    }
}
