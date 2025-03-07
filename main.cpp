

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //lista con complejida algoritmica (Log())
    set <int> s;
    
    s.insert(3);
    s.insert(2);//insertar datos de la lista
    s.insert(5);
    
    //s.erase(5); //borras el elemento de la lista
    
    
    cout<<"el 3 esta en el set? "<<s.count(3)<<endl;
    
    cout<<((s.count(3)==1)?"si esta":"no esta")<<endl;
    cout<<((s.empty()==1)?"esta llena":"no perro hpta")<<endl;
    for(auto x: s){
        cout<<x<<endl;
    }
    
    //el set no contiene indices
    //unordered_set <int> almacena varias desordenadas pero unicas
    //multiset datos repetitivos pero de manera ordenada segun su insertacion
    
    return 0;
}

//set <int> conj; >>guardar datos sin repeticion