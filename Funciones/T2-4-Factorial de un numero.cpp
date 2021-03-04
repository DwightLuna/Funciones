#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int factorial(int a);
    int main()
    {
        int n1;
        cout <<"Programa para sacar el factorial de un numero"<< endl;
        cout <<"Introduce el valor del numero" << endl;
        cin>>n1;
        int fact= factorial(n1);
        cout <<"El factorial de  "<<n1<<"  es:"<<fact<< endl;
        return 0;
    }
int factorial(int a)
{
    int i;
    int resultado=1;
    for(i=1; i<=a; i++)
    {
        resultado *=i;
    }
    return resultado;
}
