#include <iostream>
using namespace std;
int t,n;
char matrix[12][12];
int main() {
  cin>>t;
  for(int h=0;h<t;h++){
    cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin>>matrix[i][j];
    }
  }  
    bool rectan=true;
    bool res=false;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(matrix[i][j]=='1'){
          if(j==1){
            if(matrix[i+1][j]=='0'){
              rectan=false;
            }
            res=true;
            break;
          }else{
            if(matrix[i+1][j-1]=='1'){
              rectan=false;
              res=true;
              break;
            }else{
              if(matrix[i+1][j]=='0'){
                rectan=false;
              }
              res=true;
              break;
            }
          }
        }
      }
      if(res==true) break;
    }
    if(rectan){
      cout<<"SQUARE";
    }else{
      cout<<"TRIANGLE";
    }
    cout<<"\n";
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        matrix[i][j]='0';
      }
    }
  }
  
}