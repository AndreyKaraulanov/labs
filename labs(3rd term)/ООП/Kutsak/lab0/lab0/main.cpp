#include <iostream>
#include <ctime>

using namespace std;

 void square (float a = 0, float b = 0)
 {


     if ( a > 0 and b == 0) {

        cout << "Ваша сторона: " << a << endl;
         a = a * a;
        cout << "Площадь: " << a;
     }

     else if (a > 0 and b > 0){

        cout << "Высота прямоугольника: " << a << " Ширина прямоугольника: " << b << endl;
         a = a * b;
        cout << "Площадь: " << a;
     }

     else if ( a == 0 and b == 0 ){
         system("cls");
        cout << " Неверный ввод!! " << endl;
     }

     else if (a == 0 and b > 0) {
         system("cls");
        cout << " Неверный ввод!!" << endl;
     }
     else if( a < 0 and b < 0){
         cout << "Неверный ввод!!" << endl;
     }
     else if( a < 0 and b > 0){
         cout << "Неверный ввод!!" << endl;
     }
     else if(a < 0 and b == 0)
         cout << "Неверный ввод!!" << endl;
 }



int main()
{
    srand(time(NULL));
    float a, b;
    int choose;
    while(true) {

            cout << "\n Площадь квадрата и прямоугольника(стороны заданы случайным образом) - 1 \n Площадь прямоугольника - 2 \n Квадрат - 3 \n Exit - 0 \n --->";
            cin >> choose;
            
            switch(choose) {

                case 1 :
                    system("cls");
                    cout << "Выберите фигуру \n Прямоугольник - 1 \n Квалрат - 2 \n Назад - 0 \n --->";
                        cin >> choose;

                        if (choose == 0)
                            break;
                        else if (choose == 1){
                            a = rand()%10 + 1;
                            b = rand()% 10 + 1;
                            square(a,b);
                        }
                        else if (choose == 2){
                            a = rand() % 10 + 1;
                            square(a);
                        }

                break;

                case 2 :

                    system("cls");
                    cout << "Введите ширину и высоту \n ---> "; cin >> a >> b;
                    square(a,b);

                break;


                case 3 :

                    system("cls");
                    cout << "Введите любую сторону квадрата \n ---> "; cin >> a;
                    square(a);

                break;


                case 0 :

                    system("cls");
                    exit(0);

                break;


                default:

                    system("cls");
                    cout << " \t\tНеверный ввод!!!!!" << endl;

                break;

            }

    }


}
