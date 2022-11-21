#include <iostream>
#include <ctime>
#include <string>
#include <fstream>





using namespace std;

void encode(const char first_encode[], const char second_encode[]) {

    char check;
    string file_read;
    string file_write;

    cout << "Введите название файла для открытия \n --->";
    cin >> file_read;
    ifstream data_read(file_read);
    if(data_read.is_open()){
        cout << "Файл был успешно открыт." << endl;
     }
    else {
        cout << "Файл не открыт!" << endl;
        return;
    }


    cout << "\nВведите название файла для записи \n --->";
    cin >> file_write;
    ofstream data_write(file_write);
    if(data_write.is_open()){
        cout << "Файл создан." << endl;
     }
    else {
        cout << "Ошибка!!!" << endl;
        return;
    }


    while (!data_read.eof()) {
        check = "";
        getline(data_read, check);
        for (int j = 0; j < check.length(); j++){
            for (int i = 0; i < strlen(first_encode); i++) {
                if (check[j] == first_encode[i]) {
                    check[j] = second_encode[i];
                    break;
                }
            }
        }
        data_write << check << "\n";
    }cout << "\n\tКодирование завершено!\n";



    system("pause");

    data_read.close();
    data_write.close();
}

int main() {


    system("chcp 1251");
    system("cls");
    const char UTF8[] = "абвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ";
    const char win1251[] = "ЮАБЦ╢ДЕ╨ФГХЁ©ИЙКЛМНОПЯРСТУЖВЬЫЭЧЪюабц╔де╙фгх╡╞ийклмнопярстужвьыэчъ";
    const char koi8_r[] = "ИЖСЙЕМЦЬЫГУЗТШБЮОПНКДФЩЪВЯЛХРЭАЧёижсйемцьыгузтшбюопнкдфщъвялхрэачЁ";
    
    
    
    short int number;
    while (true) {
        system("cls");
        cout << "Кодировка вашего файла: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nВыход - 0 \n---> "; cin >> number;
            switch (number) {
            case 1:
                system("cls");
                cout << "Ваша новая кодировка: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nНазад - 0 \n---> "; cin >> number;
                switch (number)
                {
                case 1:
                    system("cls");
                    encode(UTF8, UTF8);
                    break;
                case 2:
                    system("cls");
                    encode(UTF8, win1251);
                    break;
                case 3:
                    system("cls");
                    encode(UTF8, koi8_r);
                    break;
                case 0:
                    system("cls");
                    break;
                default:
                    break;
                }
                break;
            case 2:
                system("cls");
                cout << "Ваша новая кодировкa: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nНазад - 0 \n---> "; cin >> number;
                switch (number)
                {
                case 1:
                    system("cls");
                    encode(win1251, UTF8);
                    break;
                case 2:
                    system("cls");
                    encode(win1251, win1251);
                    break;
                case 3:
                    system("cls");
                    encode(win1251, koi8_r);
                    break;
                case 0:
                    system("cls");
                    break;
                default:
                    break;
                }
                break;
            case 3:
                system("cls");
                cout << "Ваша новая кодировк: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nНазад - 0 \n---> "; cin >> number;
                switch (number)
                {
                case 1:
                    system("cls");
                    encode(koi8_r, UTF8);
                    break;
                case 2:
                    system("cls");
                    encode(koi8_r, win1251);
                    break;
                case 3:
                    system("cls");
                    encode(koi8_r, koi8_r);
                    break;
                default:
                    break;
                case 0:
                    system("cls");
                    break;
                }
                break;
            case 0:
                system("cls");
                exit(0);
                break;
            default:
                break;
            }
    }

    return 0;
}
