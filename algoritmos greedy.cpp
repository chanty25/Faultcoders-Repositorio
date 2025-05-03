#include <bits/stdc++.h>
using namespace std;
//Cambio de monedas
//Problema: Dado un sistema monetario y una cantidad, 
//encontrar el mínimo número de monedas para formar esa cantidad.
//Enfoque greedy: Seleccionar siempre
//la moneda de mayor valor posible en cada paso.
int coinChange(vector<int>& coins, int amount) {
    sort(coins.rbegin(), coins.rend()); // Orden descendente
    int count = 0;
    for (int coin : coins) {
        while (amount >= coin) {
            amount -= coin;
            count++;
        }
    }
    return amount == 0 ? count : -1; // -1 si no hay solución
}

//Algoritmo greedy scheduling :duracion de tareas segun cantidad-plazo de entrega
int maxLateness(vector<pair<int, int>>& tasks) { // {duración, deadline}
    sort(tasks.begin(), tasks.end(), [](auto& a, auto& b) {
        return a.second < b.second; // Ordenar por deadline ascendente
    });
    int current_time = 0, max_late = 0;
    for (auto& task : tasks) {
        int finish_time = current_time + task.first;
        int lateness = max(0, finish_time - task.second); // Retraso = max(0, fin - deadline)
        max_late = max(max_late, lateness);
        current_time = finish_time;
    }
    return max_late;
}
//algoritmo Balanceo de carga
//asignar n tareas a m maquinas 
//Asignar tareas para que la máquina más cargada tenga el menor tiempo posible.
int minMaxLoad(vector<int>& tasks, int m) {
    vector<int> loads(m, 0);
    sort(tasks.begin(), tasks.end(), greater<int>());
    
    for (int task : tasks) {
        // Encontrar la máquina con menor carga
        int min_idx = 0;
        for (int i = 1; i < m; i++) {
            if (loads[i] < loads[min_idx]) {
                min_idx = i;
            }
        }
        loads[min_idx] += task;
    }
    
    return *max_element(loads.begin(), loads.end());
}
//Rotar una matriz 90 grados
vector<vector<int>> rotar(vector<vector<int>>& a) {
    int n = sz(a), m = sz(a[0]);
    vector<vector<int>> v(m, vector<int>(n));
    forn(i, n) {
        forn(j, m) {
            v[j][n - 1 - i] = a[i][j];
        }
    }
    return v;
}

