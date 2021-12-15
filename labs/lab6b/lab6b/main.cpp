#include <iostream>
using namespace std ;
int main()
{
int i, col,res, otv , num1, num2 ;
col = 0 ;
for (i = 0; i<=10; i++) {
    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
    res = num1 * num2 ;
    cout << num1 << " * " << num2 << " = " ; cin >> otv;
    if (res != otv)
        cout << "Ошибка !" << num1 << " * " << num2 << " = " << res << endl;
    else
        col = col + 1;
}
    
cout << "Тест окончен!!!" << endl;
cout << "Ваша оценка : " ;
if (col <= (0.5*i))
    cout << 2 << endl;
else if ((col >= 0.6*i) && (col <= 0.7*i) )
    cout << 3 << endl;
else if ((col <= 0.9*i) && (col >= 0.8*i))
    cout << 4 << endl;
else if (col == i)
    cout << 5 << endl;
else
    printf("Что-то пошло не так");
return 0 ;
}
