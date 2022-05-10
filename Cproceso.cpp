//.cpp desarollas 
#include "Cproceso.h"

Cproceso::Cproceso(int numerador, int denominador){
	this -> num=numerador;//la flecha es un operador trabaja con memoria dinamica 
	this -> den=denominador;
}
//: memoria estatica
void Cproceso::setNum(int numerador){//:: operador de ambito, englobo el espacio de trabajo en el que trabajo accedo a sus atri, met,etc.
  num = numerador; 
}
void Cproceso::setDen(int denominador){
	den=denominador;
}
int Cproceso::getNum(){
	return num;
}
int Cproceso::getDen(){
	return den;
}
Cproceso Cproceso::racional(Cproceso obj1, Cproceso obj2){
	int a,b,c,d;
	a=obj1.getNum();
	b=obj1.getDen();
	c=obj2.getNum();
	d=obj2.getDen();
	this->setNum((a*d)+(b*c));
	this->setDen(b*d);
	return *this;
}
void Cproceso::imprimirObj(Cproceso obj){
	cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}




