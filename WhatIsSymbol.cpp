// Пользователь вводит с клавиатуры символ. Определить,
// какой это символ : Буква, цифра, знак препинания или другое.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    char symbol;

    cout << "Введи любой символ, я скажу к какому типу он принадлежит : ";
    cin >> symbol;

    // Преобразую в int, для получения код ASCII
    int codeSymbol = (int)symbol;

   
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
    {
        cout << "Это буква английского алфавита " << symbol << endl;
        return 0;
    }        
    else if ((symbol & 0xC0) == 0xC0)
    {
        cout << "Это буква русского алфавита " << symbol << endl;
        return 0;
    }        
    else if (symbol >= '0' && symbol <= '9')
    {
        cout << "Это цифра " << symbol << endl;
        return 0;
    }        
    else if ((symbol >= 33 && symbol <= 47) || (symbol >= 58 && symbol <= 64) ||
        (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 126))
    {
        cout << "Это знак препинания" << symbol << endl;
        return 0;
    }        
    else 
    {
        cout << "Это другой не определённый символ" << endl;
        return 0;
    }        
    
}
