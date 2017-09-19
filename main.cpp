#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
#include <set>          // std::list
#include <map>          // std::list
using namespace std;


//Agrega valor (dado) a mi_mapa (dado), en la llave dada
//Nota: mi_mapa es un apuntador, para usarlo se sugiere desrreferenciarlo con el operador *
void asignarValor(map<string,int> *mi_mapa, string llave,int valor)
{
    return *mi_mapa[valor]=llave;
}

//Devuelve el valor asociado a la llave (dada) en mi_mapa (dado)
char obtenerValor(map<int,char> mi_mapa,int llave)
{
    return mi_mapa[llave];
}

//Devolver el un mapa con los siguientes valores dados en la tabla
//  LLave     |   Valor
//----------------------------
//  1         |   "lunes"
//  2         |   "martes"
//  3         |   "miercoles"
//  4         |   "jueves"
//  5         |   "viernes"
//  6         |   "sabado"
//  7         |   "domingo"
map<string,int> obtenerSemana()
{
    map<string,int> semana;

    semana["Lunes"]= 1;
    semana["Martes"]= 2;
    semana["Miercoles"]= 3;
    semana["Jueves"]= 4;
    semana["Viernes"]= 5;
    semana["Sabado"]= 6;
    semana["Domingo"]= 7;

    return semana;
}

//devuelve la interseccion de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga unicamente los valores que mi_set1 y mi_set2 tengan en comun)
set<int> getInserseccion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int>::iterator i = mi_set1.begin();
    while(i!=mi_set1.end()){
        set<int>::iterator y = mi_set2.begin();
        while(y!=mi_set2.end()){
            if(*i==*y){
                mi_set3.insert(*i);
            }
            y++;
        }
        i++;
    }
    return mi_set3;
}

//devuelve la union de mi_set1 (dado) y mi_set2 (dado)
//(devuelve un set que contenga todos los valores de mi_set1 y mi_set2)
set<int> getUnion(set<int> mi_set1, set<int> mi_set2)
{
    set<int> mi_set3;
    set<int>::iterator i = mi_set1.begin();
    while(i!=mi_set1.end()){
        mi_set3.insert(*i);
        i++;
    }
    set<int>::iterator y = mi_set2.begin();
    while(y!=mi_set2.end()){
        mi_set3.insert(*y);
        y++;
    }
    return mi_set3;
}

//devuelve true si mi_sub_set (dado) es un subconjunto de mi_set (dado)
//(mi_set contiene todos los valores de mi_sub_set)
bool esSubConjunto(set<int> mi_set, set<int> mi_sub_set)
{
    bool encontrado;
    set<int>::iterator i = mi_sub_set.begin();
    while(i!=mi_sub_set.end()){
        set<int>::iterator y = mi_set.begin();
        encontrado=false;
        while(y!=mi_set.end()){
            if(*i==*y){
                encontrado=true;
            }
            y++;
        }
        if(encontrado==false){
            return false;

        }
        i++;
    }

    return true;
}

int main ()
{

    //Funcion evaluadora
    evaluar();
    return 1;
}