#include <iostream>
#include <string>


using namespace std;

string login,haslo;

int main()
{
    cout<<"Podaj login: ";
    cin>>login;
    cout<<"Podaj Haslo: ";
    cin>>haslo;

    if((login== "admin")&&(haslo=="nigger"));
    {
        cout<<"udalo sie zalogowales sie";
    }
    else
    {
        cout<<"nie udalo sie zalogowac";
    }
    return 0;
}