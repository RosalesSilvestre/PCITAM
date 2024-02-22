#include <iostream>
using namespace std;
int t,q;
int arre[int(2e5)+5];
int s(int x){
  //esta funcion recibe un entero x y devuelve la suma de sus digitos
  int ans=0;
  while(x>=1){
    ans+=x%10;
    x/=10;
  }
  return ans;
}
int main() {
  // linea para acelerar input y output
  ios_base::sync_with_stdio(0);cin.tie(0);
  //calculamos la suma de los digitos de un numero y guardamos la respuesta en arre para calcular la siguiente poscicion
  for(int i=1;i<=2e5;i++){
    arre[i]=arre[i-1]+s(i);
  }
  cin>>t;
  while(t--){
    cin>>q;
    cout<<arre[q]<<'\n';
  }
}