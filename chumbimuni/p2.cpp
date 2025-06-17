#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;
struct sismo{
    int id;
    string fecha;
    string hora;
    float magnitud;
    string ubicacion;
};
void mostrar(sismo arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"id:"<<arr[i].id<<" fecha:"<<arr[i].fecha<<" hora:"<<arr[i].hora<<" magnitud:"<<arr[i].magnitud<<" ubicacion"<<arr[i].ubicacion<<endl;
    }
}
void registrar(sismo arr[],int n){}
int main()
{
    
    ifstream archivo("archivo.txt");
    
    int n=0;
    while(!archivo.eof()){
        n++;
    }
    int i=0;
    int idq;
    string fechaq;
    string horaq;
    float magnitudq;
    string ubicacionq;
    sismo arr[n];
    do{
        strcpy(archivo,idq," ");
        arr[i].id=stoi(idq);
        getline(archivo,fechaq," ");
        arr[i].fecha=fechaq;
        getline(archivo,horaq," ");
        arr[i].hora=horaq;
        getline(archivo,magnitudq," ");
        arr[i].magnitud=stof(magnitudq);
        getline(archivo,ubicacionq," ");
        arr[i].ubicacion=ubicacionq;
        i++;
    }while(i<n);
    archivo.close();


    
    int k=0;
    do{
        cout<<"menu:"<<endl;
        cout<<"1) Mostrar todos los sismos registrados en el archivo."<<endl;
        if(k==1){
            mostrar(arr,n);
        }
        cout<<"2) Registrar nuevo sismo en el archivo"<<endl;
        if(k==2){
            registrar(arr,n);
        }
        cout<<"3) Salir del programa "<<endl
    }while(k!=3);
 
    
    

    return 0;
}
void registrar(sismo arr[],int n){
    ifstream archivo("archivo.txt");
    cout<<"nuevo sismo"<<endl;
    int i=n+1;
        cin>>arr[i].id>>arr[i].fecha>>arr[i].hora>>arr[i].magnitud>>arr[i].ubicacion;
    
}

