#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include "math.h"

using namespace std;

class Main {
public:
    void main();
};

class Rectangle {
    int a;
    int b;
public:

    Rectangle(int a = 0, int b = 0) { this->a = a; this->b = b; }

    friend Rectangle& operator + (const Rectangle& ob1, const Rectangle& ob2) {
        Rectangle result(ob1.a + ob2.a, ob1.b + ob2.b);
        return result;
    };
    friend Rectangle& operator - (const Rectangle& ob1, const Rectangle& ob2) {
        Rectangle result(ob1.a - ob2.a, ob1.b - ob2.b);
        return result;
    };
    friend Rectangle& operator / (const Rectangle& ob1, const Rectangle& ob2) {
        Rectangle result(ob1.a / ob2.a, ob1.b / ob2.b);
        return result;
    };
    friend Rectangle& operator / (const Rectangle& ob1, int number) {
        Rectangle result(ob1.a / number, ob1.b / number);
        return result;
    };
    friend Rectangle& operator * (const Rectangle& ob1, const Rectangle& ob2) {
        Rectangle result(ob1.a * ob2.a, ob1.b * ob2.b);
        return result;
    };

    bool operator == (const Rectangle& ob) { return ((a * b) == (ob.a * ob.b)); }
    bool operator != (const Rectangle& ob) { return !((a * b) == (ob.a * ob.b)); }
    bool operator > (const Rectangle& ob) { return ((a * b) > (ob.a * ob.b)); };
    bool operator < (const Rectangle& ob) { return ((a * b) < (ob.a * ob.b)); };
    bool operator >= (const Rectangle& ob) { return ((a * b) >= (ob.a * ob.b)); };
    bool operator <= (const Rectangle& ob) { return ((a * b) <= (ob.a * ob.b)); };

    Rectangle& operator = (const Rectangle& ob)
    {
        a = ob.a; b = ob.b;
        return *this;
    }

    

    void squrt()
    {
        this->a = sqrt(this->a);
        this->b = sqrt(this->b);
    }

    friend ostream& operator <<(ostream& out, const Rectangle& ob) {
        out << "A = " << ob.a << " || B = " << ob.b;
        return out;
    }
};

class Parallelepiped {
    float a;
    float b;
    float c;
public:
    Parallelepiped(float a = 0, float b = 0, float ñ = 0) { this->a = a; this->b = b; this->c = ñ;}

    friend Parallelepiped& operator + (const Parallelepiped& ob1, const Parallelepiped& ob2) {
        Parallelepiped result(ob1.a + ob2.a, ob1.b + ob2.b, ob1.c + ob2.c);
        return result;
    };
    friend Parallelepiped& operator - (const Parallelepiped& ob1, const Parallelepiped& ob2) {
        Parallelepiped result(ob1.a - ob2.a, ob1.b - ob2.b, ob1.c - ob2.c);
        return result;
    };
    friend Parallelepiped& operator / (const Parallelepiped& ob1, const Parallelepiped& ob2) {
        Parallelepiped result(ob1.a / ob2.a, ob1.b / ob2.b, ob1.c / ob2.c);
        return result;
    };
    friend Parallelepiped& operator / (const Parallelepiped& ob1, int number) {
        Parallelepiped result(ob1.a / number, ob1.b / number, ob1.c / number);
        return result;
    };
    friend Parallelepiped& operator * (const Parallelepiped& ob1, const Parallelepiped& ob2) {
        Parallelepiped result(ob1.a * ob2.a, ob1.b * ob2.b, ob1.c * ob2.c);
        return result;
    };

    /*Parallelepiped& operator = (const Parallelepiped& ob)
    {
        a = ob.a; b = ob.b; c = ob.c;
        return *this;
    }*/

    bool operator == (const Parallelepiped& ob) { return ((a * b * c) == (ob.a * ob.b * ob.c)); }
    bool operator != (const Parallelepiped& ob) { return !((a * b * c) == (ob.a * ob.b * ob.c)); }
    bool operator > (const Parallelepiped& ob) { return ((a * b * c) > (ob.a * ob.b * ob.c)); };
    bool operator < (const Parallelepiped& ob) { return ((a * b * c) < (ob.a * ob.b * ob.c)); };
    bool operator >= (const Parallelepiped& ob) { return ((a * b * c) >= (ob.a * ob.b * ob.c)); };
    bool operator <= (const Parallelepiped& ob) { return ((a * b * c) <= (ob.a * ob.b * ob.c)); };
    

    void squrt()
    {
        this->a = sqrt(this->a);
        this->b = sqrt(this->b);
        this->c = sqrt(this->c);
    }

    friend ostream& operator <<(ostream& out, const Parallelepiped& ob) {
        out << "a = " << ob.a << " || b = " << ob.b << " || c = " << ob.c << " || v = " << ob.a * ob.b * ob.c;
        return out;
    }

};


class Circle {
    float n;
    float d;
public:
    Circle() { (this->d = rand() % 50 + 1) / (this->n = rand() % 50 + 1); };
    Circle(const float d, const float n) {
        
        this->d = d; this->n = n;
    };
    // stream operators
    friend ostream& operator << (ostream& out, const Circle& ob) { out << "D = " << ob.d << " || H = " << ob.n;
        return out;};
    //friend istream& operator >> (istream& in, Fraction& ob) { cout << "Denominator --> "; in >> ob.denominator; cout << "Numerator --> "; in >> ob.numerator; return in; };

    // ar operation
    friend Circle& operator+(const Circle& ob1, const Circle& ob2)
    {
        Circle result(ob1.d + ob2.d, ob1.n + ob2.n);
        return result;
    }

    friend Circle& operator-(const Circle& ob1, const Circle& ob2)
    {
        Circle result((ob1.d * ob2.n) - (ob2.d * ob1.n), ob1.n * ob2.n);
        return result;
    }

    friend Circle& operator/(const Circle& ob1, const Circle& ob2)
    {
        Circle result(ob1.d / ob2.d, ob1.n / ob2.n);
        return result;
    }

    friend Circle& operator / (Circle& ob1, int number)
    {
        Circle result(ob1.d / number, ob1.n / number);
        return result;
    }
    

    friend Circle& operator*(const Circle& ob1, const Circle& ob2)
    {
        Circle result(ob1.d * ob2.d, ob1.n * ob2.n);
        return result;
    }

    Circle& operator = (const Circle& ob)
    {
        d = ob.d; n = ob.n;
        return *this;
    }


    void squrt()
    {
        this->n = sqrt(this->n);
        this->d = sqrt(this->d);
    }

    //compering operations
    bool operator == (const Circle& ob) { return ((d * n) == (ob.d * ob.n)); }
    bool operator != (const Circle& ob) { return !((d * n) == (ob.d * ob.n)); }
    bool operator > (const Circle& ob) { return ((d * n) > (ob.d * ob.n)); };
    bool operator < (const Circle& ob) { return ((d * n) < (ob.d * ob.n)); };
    bool operator >= (const Circle& ob) { return ((d * n) >= (ob.d * ob.n)); };
    bool operator <= (const Circle& ob) { return ((d * n) <= (ob.d * ob.n)); };

};


template <class T>
class Task1
{
    T ob1, ob2, ob3;
public:
    Task1(){}

    Task1(T a, T b, T c)
    {
        this->ob1 = a;
        this->ob2 = b;
        this->ob3 = c;
    }
    void maxim()
    {
        T arry[3] = { ob1, ob2, ob3 };
        T max = arry[0];
        for (int j = 0; j < 3; j++)
            if (arry[j] > arry[j - 1])
                max = arry[j];

        cout << "Максимальне значення: " << max << endl;
    }
    void minim()
    {
        T arry[3] = { ob1, ob2, ob3 };
        T min = arry[0];
        for (int j = 0; j < 3; j++)
            if (arry[j] < arry[j - 1])
                min = arry[j];
        
        cout << "Мінімальне значення: " << min << endl;
    }
    void arith_mean()
    {
        T temp = ob1 + ob2;
        temp = temp + ob3;
        temp = temp / 3;
        cout << "Середнє арифмітичне: " << temp << endl;
    }
    void sqrt_mean()
    {
        T t1 = ob1 * ob1;
        T t2 = ob2 * ob2;
        T t3 = ob3 * ob3;
        T t4 = t1 + t2;
        T t5 = t4 + t3;
        T temp = t5 / 3;
        temp.squrt();
        cout << "Середнє квадратичне: " << temp << endl;
    }
    void summary()
    {
        T t1 = ob1 + ob2;
        t1 = t1 + ob3;
        cout << "Сума аргументів: " << t1 << endl;
    }
    void multipliance()
    {
        T t1 = ob1 * ob2;
        t1 = t1 * ob3;
        cout << "Добуток чисел: " << t1 << endl;
    }

};

template <class T>
class Task2
{
    int size;
    T* ob;
public:
    Task2()
    {
        this->ob = nullptr;
        this->size = 0;
    }
    Task2(T* obj, int size)
    {
        this->size = size;
        this->ob = obj;
    }
    void maxim()
    {
        T max = ob[0];
        for (int i = 0; i < size; i++)
        {
            if (max <= ob[i])
                max = ob[i];
        }
        cout << "Максимальне значення:\n";
        cout << max << endl;
    }
    void minim()
    {
        T min = ob[0];
        for (int i = 0; i < size; i++)
        {
            if (min >= ob[i])
                min = ob[i];
        }
        cout << "Мінімальне значення:\n";
        cout << min << endl;
    }
    void sum()
    {
        T sum = ob[0];
        for (int i = 1; i < size; i++)
            sum = sum + ob[i];
    
        cout << "Сума аргументів:\n";
        cout << sum << endl;
    }
    void mult()
    {
        T mult = ob[0];
        for (int i = 1; i < size; i++)
            mult = mult * ob[i];
        
        cout << "Добуток чисел:\n";
        cout << mult << endl;
    }
    void mean()
    {
        T sum = ob[0];
        for (int i = 1; i < size; i++)
            sum = sum + ob[i];

        sum = sum / this->size;
        cout << "Середнє арифмітичне:\n";
        cout << sum << endl;
    }
    void sq_mean()
    {
        T sum = ob[0] * ob[0];
        for (int i = 1; i < size; i++){
            T mult = ob[i] * ob[i];
            sum = sum + mult;
        }
        sum = sum / this->size;
        sum.squrt();
        cout << "Середнє квадратичне:\n";
        cout << sum << endl;
    }
    void filter(T criteria)
    {
        int cnt = 0;
        for (int i = 0; i < size; i++)
            if (criteria == ob[i]) {
                cnt++;
                cout << cnt + 1 << ") " << ob[i] << endl;
            }
    
        if (cnt != 0)
            cout << "Виявлено" << cnt << " збігів\n";
        else
            cout << "Coincidenses hasn`t found!\n";
    }
};
