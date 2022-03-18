#include<iostream>
#include<conio.h>

using namespace std;


main()
{

char ch;
cin>>ch;

ch=tolower(ch);

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u')
    cout<<"vowel";

else
    cout<<"consonant";

getch();
}
