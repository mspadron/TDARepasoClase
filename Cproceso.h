//.h creas la estrucutra de clase
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
class Cproceso{
	private:
		int num;
		int den;
    public: 
        void setNum(int);
        void setDen(int);
        int getNum();
        int getDen();
        Cproceso(int, int);
        //en otra clase
        Cproceso racional(Cproceso, Cproceso);
        void imprimirObj(Cproceso);
};