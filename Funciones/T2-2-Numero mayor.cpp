#include <iostream>
using namespace std;
using std::cout;
using std::cin;
void max(int a, int b);
    int main()
    {
        int a,b;
        cout<<"Programa para ver cual es el numero mayor"<< endl;
        cout<<"Introduce el primer numero: "<< endl;
        cin>>a;
        cout<<"Introduce el segundo numero: "<< endl;
        cin>>b;
        max (a,b);
    }
    void max(int a, int b)
    {
        if (a>b)
        {
            cout << a << "Es mayor" << endl;
        }
        else if (a<b)
        {
            cout << b <<" Es mayor"<< endl;
        }
        else
            cout <<"error"<< endl;
    }
