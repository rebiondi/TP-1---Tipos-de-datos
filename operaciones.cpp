/* TP #1 - Tipos de Datos - En el programa se realizan algunas operaciones con los tipos de datos int, double, char, string y bool.
* Biondi, Rolando Ezequiel
* 12/04/2015
*/

#include <iostream>

using namespace std;

int main(){

    int x, y;
    double z, v, w;
    char a='@', b;
    bool f1=false, f2;
    string p1, p2;

    cout<<"Operaciones con distintos tipos de datos\n\n";
    cout<<"1- Ingrese un numero para realizar operaciones matematicas: ";
    cin>>x;
    cout<<"\nIngrese otro numero: ";
    cin >>y;
    cout<<"La suma de esos numeros es: " << x+y;
    cout<<"\nLa resta de esos numeros es: " << x-y;
    cout<<"\nLa multiplicacion de esos numeros es: " << x*y;

    cout<<"\n\n2- Ingrese un numero con coma para realizar operaciones matematicas: ";
    cin>>v;
    cout<<"\nIngrese otro numero: ";
    cin >>w;
    cout<<"La suma de esos numeros es: " << v+w;
    cout<<"\nLa resta de esos numeros es: " << v-w;
    cout<<"\nLa multiplicacion de esos numeros es: " << v*w;
    if(y!=0){
            cout<<"\nLa division de esos numeros es: " << v/w;
    }
    else{
            cout <<"\nNo se puede dividir por cero";
    }

    cout<<"\n\n3- El sistema tiene un caracter guardado, ingrese uno para ver si son iguales: ";
    cin>>b;
    if(a==b){
        cout<<"Correcto, el caracter era " << a;
    }
    else{
        cout<<"Incorrecto, el caracater es " <<a;
    }

    cout<<"\n\n4- Escriba la mitad de una palabra: ";
    cin>>p1;
    cout<<"\nEscriba el final de la palabra: ";
    cin>>p2;
    cout<<"\nLa palabra entera es: " << p1+p2;
    cout<<"\nLa cantidad de caracteres de la palabra es: " << (p1+p2).size();

    cout<<"\n\n5- El sistema tiene un valor booleano guardado, ingrese uno para ver si son iguales: ";
    cin>>f2;
    if(f2==f1){
        cout<<"Correcto, el valor era " << f1;
    }
    else{
        cout<<"Incorrecto, el valor es " <<f1;
    }
}
