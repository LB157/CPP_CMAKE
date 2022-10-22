#include <iostream>
using namespace std;

void menu();

int main()
{
    char ch;
    menu();
    while (cin >> ch)
    {
        switch (ch)
        {
        case 'c':
        {
            cout << "carnivores" << endl;
            break;
        }
        case 'p':
        {
            cout << "pianist" << endl;
            break;
        }
        case 't':
        {
            cout << "tree" << endl;
            break;
        }
        case 'g':
        {
            cout << "game" << endl;
            break;
        }
        default:
        {
            cout << "Please enter a c, p, t, or g: ";
            break;
        }
        }
        if ('c' == ch || 'p' == ch || 't' == ch || 'g' == ch)
        {
            break;
        }
    }

    return 0;
}

void menu()
{
    cout << "Please enter one of the following choices:" << endl;
    cout << "c) carnivore           p) pianist" << endl;
    cout << "t) tree                g) game" << endl;
}

