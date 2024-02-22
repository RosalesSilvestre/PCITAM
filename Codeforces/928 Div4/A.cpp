#include <iostream>
using namespace std;
int t,a,b;
string cadena;
int main() {
  cin>>t;
  while(t--){
    cin>>cadena;
    a=0;
    b=0;
    for(int i=0;i<cadena.length();i++){
      if(cadena[i]=='A'){
        a++;
      }else{
        b++;
      }
    }
    (a<b)?cout<<"B":cout<<"A";
    cout<<'\n';
  }
 
}