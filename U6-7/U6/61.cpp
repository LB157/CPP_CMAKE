#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    while (cin.get(ch) && ch != '@')
    {
        if (islower(ch)) // a true
        {
            ch = toupper(ch); //a A 
        }
        else if (isupper(ch)) // A true
        	{
            	ch = tolower(ch);//A a
       		}
        	if (!isdigit(ch)) //0-9 true
       		{
            	cout.put(ch); //Êä³ö×Ö·û 
        	}
    }
    cout << "³öÏÖ@×Ö·û£¬ÖÕÖ¹³ÌÐò" << endl;

    return 0;
}

