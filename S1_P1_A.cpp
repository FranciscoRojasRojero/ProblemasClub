#include <iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main ()
{
 
  int i, j, aux, tam;
  char o_n[100];
    
    cin.getline (o_n, 100, '\n');
    tam=strlen(o_n);
    
    for (i =0; i<tam;)
    {
            for (j=i+2;j<tam;)
            {
                if(o_n[i]>o_n[j])
                {
                    aux=o_n[i];
                    o_n[i]=o_n[j];
                    o_n[j]=aux;
                }
                j=j+2;
            }
        i=i+2;
	}
 
    for (i = 0; i<tam; i++)
    {
        cout<<o_n[i];
    }
}