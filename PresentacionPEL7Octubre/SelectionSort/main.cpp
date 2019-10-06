#include<iostream>
using namespace std;
//Intercambiamos el contenido de las variables a y b
void swapping(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size) {
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void selectionSort(int *array, int size) {
    int i, j, imin;
    for(i = 0; i<size-1; i++) {
        imin = i;   //Cogemos el indice del menor valor
        for(j = i+1; j<size; j++)
            if(array[j] < array[imin])
                imin = j;
        //Lo colocamos en la correcta posicion
        swap(array[i], array[imin]);
    }
}
int main() {
    int n;
    cout << "Introduce el numero de elementos del array: ";
    cin >> n;
    //Creamos las dimensiones del array
    int arr[n];
    cout << "Introduce los elementos del array:\n";
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Array antes de ordenarlo: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "Array despues de ordenarlo: ";
    display(arr, n);
}