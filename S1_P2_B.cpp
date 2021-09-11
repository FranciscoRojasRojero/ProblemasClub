//Francisco Rojas
//2MM3
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int c_i,c_j,c_j2,n,m,aux,aux2;
    cin>>n;
    cin>>m;
    int tareas[m];
    long long int c_g;
    
    for(c_i=0;c_i<m;c_i++)
    {
     cin>>tareas[c_i];
    }
    c_g=tareas[0]-1;
    

    for (c_j=0;c_j<m-1;c_j++)
    {
        aux=tareas[c_j];
        aux2=tareas[c_j+1];
            
        if (aux<aux2)
        {
            c_g=c_g+aux2-aux;
        }
        else if (aux>aux2)
        {
            c_g=c_g+n-aux+aux2;
        }
    }
    cout<<c_g;
}