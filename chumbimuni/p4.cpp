#include <iostream>
#include<fstream>
using namespace std;
struct alumno{
    int codigo;
    string nombre;
    float nota;
};
int main()
{
    int n,i=0;
    alumno *arr;
    cout<<"Ingrese la cantidad de estudiantes. "<<endl;
    cin>>n;
    ifstream archivo("alumnos.dat");
    do{
        cout<<"codigo ";
        cin>>arr->codigo[i];
        cout<<"nombre ";
        getline(arr->nombre[i]);
        cout<<"nota ";
        cin>>arr->nota[i];
        i++;
    }while(i<n);
    
    

    return 0;
}
