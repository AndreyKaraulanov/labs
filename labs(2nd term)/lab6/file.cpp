#include"file.hpp"
void Delete(char*s1, int b, int c) {
    int i;
    for (i = 0; *(s1+i); i++);
    if ((b < i) && (c < i) && ((i-c)>i)){
    cout << s1 << endl;
    int j = b - 1;
    while (*(s1+j)){
        *(s1 + j) = *(s1 + j + c);
        j++;
    }
    cout << s1;} else {
        cout << "Данная строка не расчитана на столько элементов!"<< endl;
    }
}
