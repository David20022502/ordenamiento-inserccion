#include <iostream>
#include <fstream>
using namespace std;
void ordenar(int a[],int tam);
void mostrar(int a[], int tam);
ofstream datos;
int main()
 {
   datos.open("ordenamiento.txt", ios::app);
   int valor, arr[100], tam;
   cout << " ingrese el tamaño del arreglo: ";
   cin>> tam;
   datos << "elementos sin ordenar: " << endl;
   for (int i= 0;i<tam;i++)
   {
      cout << " ingrese los elementos del arreglo: ";
      cin >> valor;
      datos << valor << endl;
      arr[i]=valor;
   }
   datos.close();
   ordenar(arr,tam);
}
void ordenar(int a[],int tam)
{
  int i,b, aux,p;
  for(i=0;i<tam;i++)
  {
    aux=a[i];
    p=i;
    while(p>0)
    {
      if(a[p-1]>aux)
      {
        a[p]=a[p-1];
        a[p-1]=aux;
      }
      p--;
    }
  }
  mostrar(a,tam);
}
void mostrar(int a[], int tam)
{
  int total=0;
  cout << "elementos ordenados" << endl;
  datos.open("ordenamiento.txt",ios::app);
  datos << "elementos ordenados" << endl;
  for(int i=0;i<tam;i++)
  {
    cout << a[i] << endl;
    datos << a[i] << endl;
    total= total+a[i];
  }
  cout << "total de elementos: "<< tam << endl;
  cout << "suma de los elementos: " << total << endl;
   datos<< "total de elementos: "<< tam << endl;
   datos << "suma de los elementos: " << total << endl;
  datos.close();
}