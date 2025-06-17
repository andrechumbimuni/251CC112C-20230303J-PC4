#include <iostream>
#include<cstring>
#include<fstream>
using namespace std;

struct punto{
    int x;
    int y;
};
struct conjunto{
    punto *puntos;
    int tamano;
};
void mostrar(conjunto A,int n){
for(int i=0;i<n;i++){
        cout<<A.puntos[i].x<<" "<<A.puntos[i].y<<endl;
    }
}
void unir(conjunto A, conjunto B,int ta,int tb){
    cout<<"union entre a y b"<<endl;
    for(int i=0;i<ta;i++){
        cout<<"("<<A.puntos[i].x<<","<<A.puntos[i].y<<")";
    }
    
    
    for(int i=0;i<ta;i++){
        for(int j=i;j<tb;j++){
            if(A.puntos[i].x!=B.puntos[j].x||A.puntos[i].y!=B.puntos[j].y){

                cout<<"("<<B.puntos[j].x<<","<<B.puntos[j].y<<")";

            }
        }}
}

int main()
{
    int ta,tb;
    conjunto A;
    conjunto B;
    cout<<"cojunto A "<<endl;
    cout<<"ingrese la cantidad de puntos  ";
    cin>>ta;
    A.puntos= new punto[ta];
    cout<<"ingrese los puntos (x y)"<<endl;
    for(int i=0;i<ta;i++){
        cin>>A.puntos[i].x>>A.puntos[i].y;
    }
    
    cout<<"cojunto B "<<endl;
    cout<<"ingrese la cantidad de puntos  ";
    cin>>tb;
    B.puntos= new punto[tb];
    cout<<"ingrese los puntos (x y)"<<endl;
    for(int i=0;i<tb;i++){
        cin>>B.puntos[i].x>>B.puntos[i].y;
    }
    unir(A,B,ta,tb);


    


    return 0;
}


