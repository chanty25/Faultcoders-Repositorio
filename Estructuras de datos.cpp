int main() {
    stack <tipoDato> st;
    st.push(x);  // Inserta x al tope
    st.pop();  // Elimina el tope (NO lo retorna)
    st.top();   // Retorna el valor del tope (sin eliminar)
    st.empty();  // true si está vacía
    st.size();  // número de elementos
    
    queue <tipoDato> q;
    q.push(x);      // Inserta al final
    q.pop();        // Elimina el frente
    q.front();      // Valor del frente
    q.back();       // Valor del último
    q.empty();      // true si está vacía
    q.size();       // número de elementos
    
    deque<int> dq;
    dq.push_back(x);  // Inserta al final
    dq.push_front(x); // Inserta al principio
    dq.pop_back(); // Elimina al final
    dq.pop_front(); // Elimina al principio
    dq.front();   // Accede al primero
    dq.back();  // Accede al último
    dq.empty();  // true si está vacía
    dq.size();  // número de elementos
    dq.erase(dq.begin() + pos); //elimina al elemento en las posicion pos
    dq.insert(dq.begin() + pos, num); //inserta un numero (num) en una posicion (pos)
    dq.insert(dq.begin() + pos, can, num);  // inserta una cantidad (can) de numeros (num) en la posicion (po)
    
    vector <pii> vp;
    // Acceso
    vp.front();   // Primer elemento
    vp.back();    // Último elemento
    vp[1];        // Elemento en la posición 1
    vp.at(2);     // Elemento en la posición 2
    
    // Inserción
    vp.push_back({7, 8});                 // Inserta al final
    vp.insert(v.begin() + 1, {9, 10});    // Inserta en posición 1
    vp.emplace_back(11, 12);              // Inserta de forma eficiente
    
    // Eliminación
    vp.pop_back();                        // Elimina el último elemento
    vp.erase(v.begin() + 1);              // Elimina el elemento en la posición 1
    vp.erase(v.begin() + 1, v.begin() + 3); // Elimina del 1 al 2
    
    // Tamaño y verificación
    vp.size();                            // Tamaño del vector
    vp.empty();                           // Verifica si está vacío
    vp.clear();                           // Vacía el vector

    // Crear una priority queue (maximo elemento por defecto)
    priority_queue<int> pq;
    // priority queue (minimo elemento por defecto)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    // Iteradores
    for (auto it = vp.begin(); it != vp.end(); ++it) {
        cout << it->first << ", " << it->second << endl;
    }
    // Reservar espacio
    vp.reserve(10);                       // Reserva espacio para 10 elementos
    return 0;
}
