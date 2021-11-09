#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using namespace std;
 
int main(int argc, char* argv[])
{
    int N;
    cout << "Введите количество элементов массива" << endl;
    cin>>N;
    int array1[N]; // объявляем целочисленный массив
    cout << "Введите элементы массива" << endl;
    int sum = 0;
    for ( int counter = 0; counter < N; counter++ ) // цикл для считывания чисел
        cin >> array1[counter];  // считываем вводимые с клавиатуры числа
    cout << "array1 = {";
    for ( int counter = 0; counter < N; counter++ ) // цикл для вывода элементов массива
        cout << array1[counter] << " ";  // выводим элементы массива на стандартное устройство вывода
    for ( int counter = 0; counter < N; counter++ ) // цикл для суммирования чисел массива
        sum += array1[counter]; // суммируем элементы массива
    cout << "}\nсумма = " << sum << endl;
    cout << "Обратное число:";
    while (sum>0) {
        int digit = sum % 10;
        sum = sum/10;
        cout << digit;
    }
    putchar('\n');
    return 0;
}

