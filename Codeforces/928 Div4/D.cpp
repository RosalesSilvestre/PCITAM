#include <iostream>
#include <map>
using namespace std;
int t, n, pares, num, pareja;
map<int, int> arre;
int main() {
  // linea para acelerar input y output
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while (t--) {
    cin >> n;
    pares = 0;
    for (int i = 0; i < n; i++) {
      cin >> num;
      //calculas el numero que necesitas para dar xor 2^31-1
      pareja = INT32_MAX ^ num;
      if (arre[pareja] > 0) {
        //teniamos una existencia en el arreglo entonces la emparejamos
        pares++;
        arre[pareja]--;
      } else {
        //no tenemos un par en el arreglo entonces lo agregamos
        arre[num]++;
      }
    }
    cout << n - pares << "\n";
    //limpiamos el map
    arre.clear();
  }
}