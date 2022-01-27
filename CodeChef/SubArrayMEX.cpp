#include <bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin >> t;
      while (t--){
            int N,K,X;
            cin>>N>>K>>X;
            if(K<X){
                  cout<<-1<<endl;
            }
            else{
                  int count=0;
                  for(int i=0;i<N;i++){
                        if(count==X){
                              count=0;
                        }
                        cout<<count<<" ";
                        count++;
                  }
                  cout<<endl;
            }
        }
    return 0;  
}      