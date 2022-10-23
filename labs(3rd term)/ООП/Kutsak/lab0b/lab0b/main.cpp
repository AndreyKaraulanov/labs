#include <iostream>
#include <ctime>
using namespace std;

void pointer(int *a, int *b, int *c){
    if (( (*a) > (*c) and (*b) > (*c) and (*a) >= (*b) ) or  ( (*c) > (*a) and (*b) > (*a) and (*c) >= (*b) ) or ( (*a) > (*c) and (*a) > (*b) and (*b) == (*c) ) or ( (*c) > (*a) and (*c) > (*b) and (*b) == (*a) ) ){
        swap((*a), (*c));
    }
    else if (((*b) > (*c) and (*a) > (*c) and (*b) >= (*a)) or ( (*c) > (*b) and (*a) > (*b) and (*c) >=(*a)) or ((*b) > (*c) and (*b) > (*a) and (*c) == (*a)) or ((*c) > (*b) and (*c) > (*a) and (*b)==(*a))){
            swap ((*b),(*c));
    }
    else if (((*a) > (*b) and (*c) > (*b) and (*a) >= (*c)) or ((*b) > (*a) and (*c) > (*a) and (*b) >= (*c)) or ((*a) > (*b) and (*a) > (*c) and (*b)==(*c)) or ((*b) > (*a) and (*c) > (*a) and (*b)==(*c))) {
        swap((*a),(*b));

    }
}

void link(int &a, int &b, int &c){
    if ((a > c and b > c and a >= b) or (c > a and b > a and c >= b) or (a > c and a > b and b==c) or (c>a and c > b and b==a)) {
        swap(a,c);
    }
    else if ((b > c and a > c and b >= a) or ( c > b and a > b and c >=a) or (b > c and b > a and c == a) or (c > b and c > a and b==a)){
        swap (b,c);
    }
    else if ((a > b and c > b and a >= c) or (b > a and c > a and b >= c) or (a > b and a > c and b==c) or (b > a and c > a and b==c)){
        swap(a,b);

    }
}

int main() {
    while(true){
        int choose, a, b, c;
        cout << "Каким способом вы хотите поменять числа местами?" << endl;
        cout << "1 - с помощью указателей" << endl;
        cout << "2 - с помощью ссылок" << endl;
        cin >> choose;
        if (choose == 1){
            a = rand()%10+1;
            b = rand()%10+1;
            c = rand()%10+1;
            cout << "Числа до смены местами максимального и минимального: " << a << ' ' << b << ' ' << c << endl;
            pointer(&a, &b, &c);
            cout << "Числа после смены местами максимального и минимального: " << a << ' ' << b << ' ' << c << endl;
        }
        if (choose == 2){
            a = rand()%10+1;
            b = rand()%10+1;
            c = rand()%10+1;
            cout << "Числа до смены местами максимального и минимального: " << a << ' ' << b << ' ' << c << endl;
            link(a, b, c);
            cout << "Числа после смены местами максимального и минимального: " << a << ' ' << b << ' ' << c << endl;
        }
    }
    
    return 0;
}
