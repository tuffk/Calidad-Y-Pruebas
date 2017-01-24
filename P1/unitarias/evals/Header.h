#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

template <class T>
class Ordenamiento
{

private:
	int num;
	T *arreglo;
	void merge(int, int, int, bool (*) (T, T));

public:
	Ordenamiento( int,  T*);
	~Ordenamiento();
	void creaInt();
	void creaFlo();
	void creaChar();
	void creaStr();
	void imprime();
	void ordenamientoBurbuja(bool (*) (T,T));
	void selectionSort(bool (*) (T, T));
	void insertionSort(bool (*) (T, T));
	void quicksort(int, int, bool (*) (T, T), bool (*) (T, T));
	void mergesort(int, int, bool (*) (T, T));
	int orden();
	int menu();
	T* getArr();
	
	
};

template<class T>
T* Ordenamiento<T>::getArr()
{
	return arreglo;
}

template<class T>
Ordenamiento<T>::Ordenamiento( int n, T *a)
{
	num = n;
	arreglo = a;
}

template <class T>
void Ordenamiento<T>::creaInt()
{

	srand((int) time(NULL));

	for (int i = 0; i < num; i++)
		arreglo[i] = (rand() % 100);

}

template <class T>
void Ordenamiento<T>::creaFlo()
{

	float temp;
	srand((int )time(NULL));

	for (int i = 0; i < num; i++)
	{
		temp = rand() % 1000;
		arreglo[i] = temp/10;
	}

}

template<class T>
void Ordenamiento<T>::creaChar()
{

	int temp;
	srand((int) time(NULL));

	char car [26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	for (int i = 0; i < num; i++)
	{
		temp = rand() % 26;
		arreglo[i] = car[temp];
	}

}

template<class T>
void Ordenamiento<T>::creaStr()
{

	cout << "Vas a tener que escribir las palabras" << endl;

	for (int i = 0; i < num; i++)
		cin >> arreglo[i];

}

template<class T>
void Ordenamiento<T>::ordenamientoBurbuja(bool orden(T, T))
{

	T temp;

	for (int i = 0; i < num; i++)
	{
		for (int j = num - 1; j > i; j--)
		{
			if (orden(arreglo[j - 1], arreglo[j]))
			{
				temp = arreglo[j - 1];
				arreglo[j - 1] = arreglo[j];
				arreglo[j] = temp;
			}
		}
	}

}

template<class T>
void Ordenamiento<T>::selectionSort(bool orden(T, T))
{
	int minimo = 0;
	T temp;

	for (int i = 0; i < num; i++)
	{
		minimo = i;
		for (int j = i + 1; j < num; j++)
		{
			if (orden(arreglo[minimo], arreglo[j]))
				minimo = j;
		}
		temp = arreglo[minimo];
		arreglo[minimo] = arreglo[i];
		arreglo[i] = temp;
	}
}

template<class T>
void Ordenamiento<T>::insertionSort(bool orden(T, T))
{

	int j;
	T index;
	for (int i = 1; i < num; i++)
	{
		index = arreglo[i];
		j = i - 1;
		while (j >= 0 && orden(arreglo[j], index))
		{
			arreglo[j + 1] = arreglo[j];
			j--;
		}
		arreglo[j + 1] = index;
	}

}

template<class T>
void Ordenamiento<T>::quicksort(int p, int u, bool menor(T, T), bool mayor(T, T))
{

	int izquierdo = p;
	int derecho = u;
	T temp;

	T pivote = arreglo[p];

	if (p < u)
	{
		
		while (izquierdo < derecho)
		{
			while ((izquierdo < derecho) && (menor(arreglo[izquierdo], pivote))) izquierdo++;
			while (mayor(arreglo[derecho], pivote)) derecho--;
			if (izquierdo < derecho)
			{
				temp = arreglo[derecho];
				arreglo[derecho] = arreglo[izquierdo];
				arreglo[izquierdo] = temp;

			}
		}

		
		temp = arreglo[derecho];
		arreglo[derecho] = arreglo[p];
		arreglo[p] = temp;

	
		quicksort(p, derecho - 1, menor, mayor);
		quicksort(izquierdo, u, menor, mayor);
	}

}

template<class T>
void Ordenamiento<T>::mergesort(int l, int n, bool orden(T, T))
{

	int m = (n + l) / 2;
	if (n > l)
	{
		mergesort(l, m, orden);
		mergesort(m + 1, n, orden);
		merge(l, m, n, orden);
	}

}

template<class T>
void Ordenamiento<T>::merge(int l, int m, int n, bool orden(T, T))
{

	int i, j, k;
	T *aux = new T[num];

	for (i = m + 1; i > l; i--) 		
		aux[i - 1] = arreglo[i - 1];
	for (j = m; j < n; j++)
		aux[n + m - j] = arreglo[j + 1];
	for (k = l; k <= n; k++) 		
		if (orden(aux[i], aux[j]))
			arreglo[k] = aux[i++];
		else
			arreglo[k] = aux[j--];

	delete [] aux;

}

template<class T>
void Ordenamiento<T>::imprime()
{

	for (int i = 0; i < num; i++)
	{
		cout << arreglo[i] << ", ";
	}
	cout << "\n\n";
}

template<class T>
int Ordenamiento<T>::orden()
{
	cout << "Opciones:" << endl;
	cout << "1 - Ascendente" << endl;
	cout << "2 - Descendente" << endl;

	cout << "Seleccione una opcion: ";

	int opcion;

	cin >> opcion;

	return opcion;
}

template<class T>
int Ordenamiento<T>::menu()
{
	cout << "Opciones:" << endl;
	cout << "1 - Burbuja" << endl;
	cout << "2 - Seleccion" << endl;
	cout << "3 - Insercion" << endl;
	cout << "4 - QuickSort" << endl;
	cout << "5 - MergeSort" << endl;
	cout << "Seleccione una opci�n: ";

	int opcion;

	cin >> opcion;

	return opcion;
}




template<class T>
Ordenamiento<T>::~Ordenamiento(){}