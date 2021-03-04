#include <iostream>
using namespace std;
using std::cout;
using std::cin;
void suma(int a, int b);
    int main()
    {
        int a,b;
        cout<<"Programa para calcular la suma de dos numeros"<< endl;
        cout<<"Introduce el primer operando: "<< endl;
        cin>>a;
        cout<<"Introduce el segundo operando: "<< endl;
        cin>>b;
        suma(a,b);


    }
    void suma(int a, int b){
    int c= a+b;
    cout<<"El resultado es: "<<c<<endl;

    }
