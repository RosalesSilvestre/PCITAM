#include <iostream>
using namespace std;
long long int t,n,pos,contador,ans;
int main() {
  // linea para acelerar input y output
  ios_base::sync_with_stdio(0);cin.tie(0);
  cin>>t;
  while(t--){
    cin>>n>>pos;
    contador=0;
    //contador es la potencia de 2 que estamos revisando
    //pos son la cantidad de posciciones en la serie que quieres avanzar y n son la cantidad de numeros en la serie
    while(pos>(n+1)/2 && n>=1){
      //(n+1)/2 son la cantidad de numeros impares menores a n
      //por lo tanto si pos es mayor a (n+1)/2 significa que la posicion se encuentra despues de todos los numeros impares por una potentica de dos que tenemos hasta el momento y entonces seguimos buscando
      pos-=(n+1)/2;
      contador++;
      n/=2;
    }
    //al final sabemos que pos es alguno de los numeros impares multiplicados por dos a la contador que tenemos (solo tenemos que calcular cual es especificamente)
    //(pos*2-1) nos da el numero impar que queremos, por ejemplo si queremos en 4to numero impar (4*2-1)=7
    //ademas 1<<contador es 2 a la potencia contador por como funciona el recorrimiento de bits en c++
    ans=(pos*2-1)*(1<<contador);
    cout<<ans<<'\n';
  }
}