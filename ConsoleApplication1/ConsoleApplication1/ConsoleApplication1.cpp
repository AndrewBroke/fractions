#include <iostream>

using namespace std;

/// <summary>
/// num - числитель
/// denum - знаменатель
/// </summary>
class Fraction {
private:
    int num; 
    int denum;

public:
    // Конструктор с параметрами;
    Fraction(int n1, int n2) 
    {
        num = n1;
        denum = n2;
        reduct();
    }

    // Конструктор по умолчанию
    Fraction() 
    {
        num = 1;
        denum = 1;
    }

    void print() 
    {
        cout << num << "/" << denum << endl;
    }

    // Функция сокращения дроби
    // Вызывать ее в конструкторе
    void reduct() 
    {
        // TODO

    }
};


using namespace std;
int main()
{
    Fraction frac = Fraction(4, 10); // -> 2/5
    Fraction frac1;
    frac.print();
}