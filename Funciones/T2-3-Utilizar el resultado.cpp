#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int max(int a, int b);
    int main()
    {
        int n1,n2,n3;
        cout<<"Programa para ver cual es el mayor de tres numeros"<< endl;
        cout<<"Introduce el primer numero: "<< endl;
        cin>>n1;
        cout<<"Introduce el segundo numero: "<< endl;
        cin>>n2;
        cout<<"Introduce el tercer numero: "<< endl;
        cin>>n3;
        int max1= max (n1,n2);
        int max2= max (max1,n3);
        cout <<"El numero mayor es" <<max2<< endl;
        return 0;
    }
    int max(int a, int b)
    {
        int c;
        if (a>b)
        {
            c = a;
        }
        else
        {
           c = b;
        }
        return c;
    }
