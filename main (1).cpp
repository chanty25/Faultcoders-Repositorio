

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //forma de declarar un mapa
    map<char, int> apl;
    // llave  valor
    // first  second
    //forma de insertar 1
    apl['c']=4;         //apl[1]=3
    apl['b']=5;         //apl[2]=5
    apl['a']=6;         //apl[5]=8
    
    //mostrar el valor de la llave
    cout<<apl['a']<<endl;
    
    for(auto g: apl){
        cout<<g.first<<" "<<g.second<<endl;
    }
    
    cout<<"--------------------------------------------"<<endl;
    
    string a="absffjkljkll";
    map<char, int> mp;
    for(int i=0;i<a.size();i++){
        mp[a[i]]++;
    //mapa llave(caracter de la cadena a) clave (la cantidad de veces que se repite) 
    }
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    //cout<<mp.count('c')<<endl;  verefica si la llave esta en el mapa mostrando 1 o 00
    //forma de insertan 2
    //apl.insert(make_pair('f',7));
    
    //en los mapas no existen los indices
    //se ordena automaticanmente de menor a mayor segun la llave ejemplo a<b
    return 0;
}