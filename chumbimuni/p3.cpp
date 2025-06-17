#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;
struct usuario{
    int codigo;
    string nombre;
    double saldo;
};
int main()
{
    int n,i=0;
    
    cout<<"Numero de usuarios: "<<endl;
    cin>>n;
    usuario arr[n];
    ofstream archivo("usuarios.dat",ios::binary);
    
    do{
        cout<<"codigo: ";
        cin>>arr[i].codigo;
        cin.ignore();
        cout<<"nombre: ";
        getline(cin,arr[i].nombre);
        cout<<"saldo: ";
        cin>>arr[i].saldo;
        i++;
        archivo<<(arr[i].codigo)<<","<<arr[i].nombre<<","<<arr[i].saldo;
    }while(i<n);
    archivo.close();
    cout<<"Contenido del archivo: "

    do{
        cout<<"codigo:   "<<(arr[i].codigo)<<"| nombre:   "<<arr[i].nombre<<" | saldo:   "<<arr[i].saldo;
      
    }while(i<n);
    int codigo,incremento;
    cout<<"modificacion de saldo "<<endl;
    cout<<"codigo de usuario: "; 
    cin>>codigo;
    int t=0;
    cout<<"incremento de saldo: ";
    cin>>incremento;
    for(int j=0;j<n;j++){
        if(arr[j]==codigo){
        arr[i]+=incremento;
        t=1;
        }
    }
    if(t==0)cout<<"Usuario con codigo "<<codigo<<" no existe";
    
    

    return 0;
}
