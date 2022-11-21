#include "lab.hpp"
void Main::main()
{
    srand(time(NULL));

    int button = -1;

    while (true) { // while stage 1 menu

        cout << "Оберіть, яким способом бажаєте реалізувати: \n"
            << "За допомогою пошуку з 3 аргументами- 1\n"
            << "За допомогою пошуку, аргументи яких є масиви об'єктів - 2\n"
            << "Вихід - 0\n"
            << "--> "; cin >> button;
        switch (button) // first stage of menu
        {
        ////////////////// 1 case 1 stage ////////////////////////////
        case 1:
            system("cls");
            while (button != 0)
            {

                cout << "Оберіть клас для роботи із ним: \n"
                    << "Прямокутник - 1 \n"
                    << "Паралелепіпед - 2 \n"
                    << "Коло - 3 \n"
                    << "Повернутись - 0 \n"
                    << "--> "; cin >> button;
            
                if (button == 1) {
                    system("cls");
                    Rectangle ob1(rand() % 50 + 1, rand() % 50 + 1), ob2(rand() % 50 + 1, rand() % 50 + 1), ob3(rand() % 50 + 1, rand() % 50 + 1);
                    Task1 <Rectangle> T1rec(ob1, ob2, ob3);
                    cout << "\nПрямокутник: \n";
                    cout << ob1 << endl << ob2 << endl << ob3 << endl << endl;

                    T1rec.maxim();
                    T1rec.minim();
                    T1rec.arith_mean();
                    T1rec.multipliance();
                    T1rec.sqrt_mean();
                    T1rec.summary();
                    system("pause");

                }
                else if (button == 2) {
                    system("cls");
                    Parallelepiped ob1(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1), ob2(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1), ob3(rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
                    Task1 <Parallelepiped> T1par(ob1, ob2, ob3);
                    cout << "\Паралелепіпед: \n";
                    cout << ob1 << endl << ob2 << endl << ob3 << endl << endl;

                    T1par.maxim();
                    T1par.minim();
                    T1par.arith_mean();
                    T1par.multipliance();
                    T1par.sqrt_mean();
                    T1par.summary();
                    system("pause");
                }
                else if (button == 3) {
                    system("cls");
                    Circle ob1(rand() % 50 + 1, rand() % 50 + 1), ob2(rand() % 50 + 1, rand() % 50 + 1), ob3(rand() % 50 + 1, rand() % 50 + 1);
                    Task1 <Circle> T1frac(ob1, ob2, ob3);
                    cout << "\Коло: \n";
                    cout << ob1 << endl << ob2 << endl << ob3 << endl << endl;

                    T1frac.maxim();
                    T1frac.minim();
                    T1frac.arith_mean();
                    T1frac.multipliance();
                    T1frac.sqrt_mean();
                    T1frac.summary();
                    system("pause");
                }

                system("cls");
            }



        break;


        ////////////////// 2 case 1 stage ////////////////////////////
        case 2:
            int size;
            system("cls");
            while (button != 0)
            {

                cout << "Оберіть клас для роботи із ним: \n"
                    << "Прямокутник - 1 \n"
                    << "Паралелепіпед - 2 \n"
                    << "Коло - 3 \n"
                    << "Повернутись - 0 \n"
                    << "--> "; cin >> button;

                if (button == 1) {
                    system("cls");
                    cout << "Введіть розмір масиву --> "; cin >> size;
                    Rectangle* recarray = new Rectangle[size];
                    for (size_t i = 0; i < size; i++)
                        recarray[i] = { rand() % 50 + 1, rand() % 50 + 1 };

                    cout << "Прямокутник: \n";
                    for (size_t i = 0; i < size; i++)
                        cout << i + 1 << ") " << recarray[i] << endl;

                    Task2 <Rectangle> T2rec(recarray, size);
                    T2rec.maxim();
                    T2rec.minim();
                    T2rec.sum();
                    T2rec.mult();
                    T2rec.mean();
                    T2rec.sq_mean();
                    int a, b;
                    cout << "Знайти рівні елементи -->"; cin >> a >> b;
                    Rectangle key(a, b);
                    T2rec.filter(key);
                    
                    system("pause");
                    delete[] recarray; recarray = NULL;
                }
                else if (button == 2) {
                    system("cls");
                    cout << "Введіть розмір масиву --> "; cin >> size;
                    Parallelepiped* paraarray = new Parallelepiped[size];
                    for (size_t i = 0; i < size; i++)
                        paraarray[i] = { (float)(rand() % 10 + 1), (float)(rand() % 10 + 1), (float)(rand() % 10 + 1) };

                    cout << "Паралелепіпед: \n";
                    for (size_t i = 0; i < size; i++)
                        cout << i + 1 << ") " << paraarray[i] << endl;

                    Task2 <Parallelepiped> T2para(paraarray, size);
                    T2para.maxim();
                    T2para.minim();
                    T2para.sum();
                    T2para.mult();
                    T2para.mean();
                    T2para.sq_mean();
                    int a, b, c;
                    cout << "Знайти рівні елементи -->"; cin >> a >> b >> c;
                    Parallelepiped key(a, b, c);
                    T2para.filter(key);

                    system("pause");
                    delete[] paraarray; paraarray = NULL;
                }
                else if (button == 3) {
                    system("cls");
                    cout << "Введіть розмір масиву --> "; cin >> size;
                    Circle* fracarray = new Circle[size];
                    for (size_t i = 0; i < size; i++)
                        fracarray[i] = { (float)(rand() % 50 + 1), (float)(rand() % 50 + 1) };

                    cout << "Коло: \n";
                    for (size_t i = 0; i < size; i++)
                        cout << i + 1 << ") " << fracarray[i] << endl;

                    Task2 <Circle> T2frac(fracarray, size);
                    T2frac.maxim();
                    T2frac.minim();
                    T2frac.sum();
                    T2frac.mult();
                    T2frac.mean();
                    T2frac.sq_mean();
                    int a, b;
                    cout << "Знайти рівні елементи -->"; cin >> a >> b;
                    Circle key(a, b);
                    T2frac.filter(key);

                    system("pause");
                    delete[] fracarray; fracarray = NULL;
                }

                system("cls");
            }


        break;


        ////////////////// 0 case 1 stage ////////////////////////////
        case 0:
            system("cls");
            exit(0);
            break;

        default:
            system("cls");
            break;
        }




    }

}
