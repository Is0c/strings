#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
using namespace std;
int main () {
    char oracion;
    int long;
    cout<<"ingrese una oracion:";
    getline (cin,oracion);
    long1=oracion.size();
    for(int i=0;i!=long1;i++)
    {
    	if(oracion.at[i]== ' ')
    	{
    		contador++;
		}
    	
	}
    cout<<"la oracion tiene"<<contador<<"palabra";
}
