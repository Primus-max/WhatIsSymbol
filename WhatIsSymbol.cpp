// Пользователь вводит с клавиатуры символ. Определить,
// какой это символ : Буква, цифра, знак препинания или другое.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char symbol;
   
    while (true)
    {
        cout << "Введи любой символ, я скажу к какому типу он принадлежит : ";
        cin >> symbol;       

        if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
            cout << "Это буква английского алфавита " << endl;
        else if ((symbol >= -128 && symbol <= -17))
            cout << "Это буква русского алфавита " << endl;
        else if (symbol >= '0' && symbol <= '9')
            cout << "Это цифра " << symbol << endl;
        else if ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) ||
            (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126))
            cout << "Это знак препинания" << endl;
        else
            cout << "Это другой не определённый символ" << endl;
    }

    return 0;   
    
}
