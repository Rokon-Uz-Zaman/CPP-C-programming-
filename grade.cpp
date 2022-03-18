#include<iostream>
#include<conio.h>
using namespace std;

main()
{
int m;
cin>>m;

if (m>=33)
{
    if (m>=80)
        cout<<"A+";
    else if (m>=70)
    cout<<"A";
    else if (m>=60)
    cout<<"A-";
    else if (m>=50)
    cout<<"B";
    else if (m>=40)
    cout<<"C";
    else
    cout<<"D";

}

else
    cout<<"Fail";



getch();
}


