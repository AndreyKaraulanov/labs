#include "lab.hpp"

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    BinaryTree* Root = NULL;

    string FullName = "Film"; int IDpass; float age;
    int button; string fileRead;

    ifstream dataFile;



    while (true){

        cout << "1 - Створити бінарне дерево вводом через консоль\n"
            << "2 - Загрузити бінарне дерево з файлу\n"
            << "3 - Роздрукувати бінарне дерево в консоль\n"
            << "4 - Прямий обхід дерева\n"
            << "5 - Симетричний обхід дерева\n"
            << "6 - Зворотній обхід дерева\n"
            << "7 - Середнє арифметичне бінарного дерева (середня тривалість фільму)\n"
            << "8 - Видалення лівого піддерева й занулення гілки\n"
            << "9 - Видалення правого піддерева й занулення гілки\n"
            << "10 - Видалити вузол й занулити його вказівник\n"
            << "11 - Видалити все дерево\n"
            << "12 - Записати бінарне дерево в файл\n"
            << "0 - Завершити роботу програми\n"
            << "---> ";
        cin >> button;
        switch (button) {
            case 1:

                cout << "Введіть кількість елементів дерева: ";
                cin >> button;
                for (size_t i = 0; i < button; i++) {
                    FullName += to_string(rand() % 10);
                    IDpass = rand()%2022;
                    age = rand() % 60 + 20;
                    CreateTree(Root, FullName, IDpass, age);
                    FullName = "Film";
                }
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    Print(&Root);
                break;

            case 2: {
                int count = 0;
                dataFile.open("data.txt");
                while (!dataFile.eof()) {
                    getline(dataFile, fileRead);
                    count++;
                }

                count = count / 3;
                dataFile.close();
                BinaryTree* data = new BinaryTree[count];
                dataFile.open("data.txt");
                for (int i = 0; i < count; i++) {
                    FullName = " ";
                    IDpass = 0;
                    age = 0;
                    dataFile >> FullName;
                    dataFile >> IDpass;
                    dataFile >> age;
                    data[i].FullName = FullName;
                    data[i].IDpass = IDpass;
                    data[i].age = age;
                }
                dataFile.close();
                for (int i = 0; i < count; i++) {
                    CreateTree(Root, data[i].FullName, data[i].IDpass, data[i].age);
                }
                break;
            }


            case 3:
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    Print(&Root);
                break;

            case 4:
                cout << "Прямий обхід дерева: " << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    pr_obh(Root);
                cout << endl;
            break;

            case 5:
                cout << "Симетричний обхід дерева: " << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    sm_obh(Root);
                cout << endl;
                break;

            case 6:
                cout << "Зворотній обхід дерева: " << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    zb_obh(Root);
                cout << endl;
            break;

            case 7:
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    cout << "Середній арефметичний рік громадян складає " << avarageAge(Root) << endl;
            break;

            case 8:
                cout << "Видалення лівого піддерева й занулення гілки" << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    del_left_tree(Root);
                cout << endl;
            break;

            case 9:
                cout << "Видалення правого піддерева й занулення гілки" << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    del_right_tree(Root);
                cout << endl;
            break;

            case 10:
                cout << "Введіть елемент, який хочете видалить: ";
                cin >> age;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    del_branch(Root, age);
            break;

            case 11:
                cout << "Дерево було очищенно з пам'яті. Подальша робота з ним неможлива!" << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    del(Root);
                break;

            case 12:
                cout << "Запис дерева у файл: " << endl;
                if (!Empty)
                    cout << "Дерево не знайдено!\n";
                else
                    write_trea_in_file(Root);
            break;


            default: {
                break;
            }
        
        }

    }

}
