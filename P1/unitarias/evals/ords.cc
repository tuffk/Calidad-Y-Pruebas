#include <iostream>
#include <string>
#include "Header.h"
 
using namespace std;
 
template<class T>
bool asc(T, T);
template<class T>
bool desc(T, T);
template<class T>
bool menor(T, T);
template<class T>
bool mayor(T, T);
int menuPrin();
//void casoUno(Ordenamiento<int>,int,int);
 
int main(int argc, const char * argv [])
{
 
    int n, opcion;
 
    cout << "Dame el numero de elementos" << endl;
    cin >> n;
 
    int *a = new int[n];
    Ordenamiento<int> intOb(n, a);
    float *b = new float[n];
    Ordenamiento<float> floOb(n, b);
    char *c = new char[n];
    Ordenamiento<char> chaOb(n, c);
    string *d = new string[n];
    Ordenamiento<string> strOb(n, d);
     
    int lol = menuPrin();
 
    switch (lol){
    case 1:
        intOb.creaInt();
        intOb.imprime();
 
        opcion = intOb.menu();
 
        switch (opcion) {
        case 1:
            if (intOb.orden() == 1)
                intOb.ordenamientoBurbuja(asc);
            else
                intOb.ordenamientoBurbuja(desc);
            break;
        case 2:
            if (intOb.orden() == 1)
                intOb.selectionSort(asc);
            else
                intOb.selectionSort(desc);
            break;
        case 3:
            if (intOb.orden() == 1)
                intOb.insertionSort(asc);
            else
                intOb.insertionSort(desc);
            break;
        case 4:
            if (intOb.orden() == 1)
                intOb.quicksort(0, n - 1, menor, asc);
            else
                intOb.quicksort(0, n - 1, mayor, desc);
            break;
        case 5:
            if (intOb.orden() == 1)
                intOb.mergesort(0, n - 1, desc);
            else
                intOb.mergesort(0, n - 1, asc);
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
 
        intOb.imprime();
        break; //CASE 1
 
    case 2:
        floOb.creaFlo();
        floOb.imprime();
 
        opcion = floOb.menu();
 
        switch (opcion) {
        case 1:
            if (floOb.orden() == 1)
                floOb.ordenamientoBurbuja(asc);
            else
                floOb.ordenamientoBurbuja(desc);
            break;
        case 2:
            if (floOb.orden() == 1)
                floOb.selectionSort(asc);
            else
                floOb.selectionSort(desc);
            break;
        case 3:
            if (floOb.orden() == 1)
                floOb.insertionSort(asc);
            else
                floOb.insertionSort(desc);
            break;
        case 4:
            if (floOb.orden() == 1)
                floOb.quicksort(0, n - 1, menor, asc);
            else
                floOb.quicksort(0, n - 1, mayor, desc);
            break;
        case 5:
            if (floOb.orden() == 1)
                floOb.mergesort(0, n - 1, desc);
            else
                floOb.mergesort(0, n - 1, asc);
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
 
        floOb.imprime();
        break;// CASE 2
 
    case 3:
        chaOb.creaChar();
        chaOb.imprime();
 
        opcion = chaOb.menu();
 
        switch (opcion) {
        case 1:
            if (chaOb.orden() == 1)
                chaOb.ordenamientoBurbuja(asc);
            else
                chaOb.ordenamientoBurbuja(desc);
            break;
        case 2:
            if (chaOb.orden() == 1)
                chaOb.selectionSort(asc);
            else
                chaOb.selectionSort(desc);
            break;
        case 3:
            if (chaOb.orden() == 1)
                chaOb.insertionSort(asc);
            else
                chaOb.insertionSort(desc);
            break;
        case 4:
            if (chaOb.orden() == 1)
                chaOb.quicksort(0, n - 1, menor, asc);
            else
                chaOb.quicksort(0, n - 1, mayor, desc);
            break;
        case 5:
            if (chaOb.orden() == 1)
                chaOb.mergesort(0, n - 1, desc);
            else
                chaOb.mergesort(0, n - 1, asc);
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
 
        chaOb.imprime();
        break; // CASE 4
 
    case 4:
        strOb.creaStr();
        strOb.imprime();
 
        opcion = strOb.menu();
 
        switch (opcion) {
        case 1:
            if (strOb.orden() == 1)
                strOb.ordenamientoBurbuja(asc);
            else
                strOb.ordenamientoBurbuja(desc);
            break;
        case 2:
            if (strOb.orden() == 1)
                strOb.selectionSort(asc);
            else
                strOb.selectionSort(desc);
            break;
        case 3:
            if (strOb.orden() == 1)
                strOb.insertionSort(asc);
            else
                strOb.insertionSort(desc);
            break;
        case 4:
            if (strOb.orden() == 1)
                strOb.quicksort(0, n - 1, menor, asc);
            else
                strOb.quicksort(0, n - 1, mayor, desc);
            break;
        case 5:
            if (strOb.orden() == 1)
                strOb.mergesort(0, n - 1, desc);
            else
                strOb.mergesort(0, n - 1, asc);
            break;
        default:
            cout << "Opción no valida" << endl;
            break;
        }
 
        strOb.imprime();
        break; //CASE 4
 
        default: cout << "Opcion invalida";
        break;
    }
 
    delete [] a;
    delete [] b;
    delete [] c;
    delete [] d;
 
    system("pause");
    return 0;
}
 
template<class T>
bool asc(T a, T b)
{
    return a > b;
}
 
template<class T>
bool desc(T a, T b)
{
    return a < b;
}
 
template<class T>
bool menor(T a, T b)
{
    return a <= b;
}
 
template<class T>
bool mayor(T a, T b)
{
    return a >= b;
}
 
int menuPrin()
{
 
    int opcion;
 
    cout << "Dame el tipo de dato para ordenar" << endl;
    cout << "1- int" << endl;
    cout << "2 float" << endl;
    cout << "3- char" << endl;
    cout << "4- string" << endl;
 
    cin >> opcion;
 
    return opcion;
}