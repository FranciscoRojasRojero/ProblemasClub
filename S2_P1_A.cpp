//Francisco Rojas
//2MM3
//Problema 230A
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s, n;
    bool gana=1;
    cin>>s;
    cin>>n;
    pair <int, int> entradas[1000];
    
    //Entradas de datos
    for (int i=0;i<n;i++){
        cin>>entradas[i].first;
        cin>>entradas[i].second;
    }
    //Ordenandolas de menor a mayor
    //sort(0,n)
    sort(entradas,entradas+n);
    
    //Si la primera entrada es mayor igual que la fuerza
    //en el momento, se cancela y manda un NO.
    //Si no se cancela, se mantiene el "YES".
    //Todo lo anterior es posible ya que fue ordenado de
    //menor a mayor
    for (int j=0;j<n;j++){
        if(entradas[j].first>=s){
            gana=0;
            break;
        }
        s=s+entradas[j].second;
    }
    if(gana==1){
        cout<<"YES"; 
    }else{
        cout<<"NO";
    }
}