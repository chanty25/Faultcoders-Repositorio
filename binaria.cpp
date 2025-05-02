#include <bits/stdc++.h>
using namespace std;

  vector<int> arr = {802, 743, 457, 539};
int k = 11;

bool es_valido(int mid) {
    int total = 0;
    for (int largo : arr) {
        total += largo / mid;
    }
    return total >= k;
}

int binary_search_respuesta() {
    int izquierda = 1, derecha = *max_element(arr.begin(), arr.end());
    int respuesta = 0;

    while (izquierda <= derecha) {
        int mid = (izquierda + derecha) / 2;
        if (es_valido(mid)) {
            respuesta = mid;
            izquierda = mid + 1;  // buscamos mayor posible
        } else {
            derecha = mid - 1;
        }
    }
    return respuesta;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}