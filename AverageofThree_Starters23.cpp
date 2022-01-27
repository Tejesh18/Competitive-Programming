#include <bits/stdc++.h>
using namespace std;

int main() {
      int t;
      cin >> t;
      while (t--) {
            int X;
            cin>>X;
            int Z=3*X;
            int Y =(3*X)-1-X;  
            cout<<X<<" "<<Y<<" "<<Z-Y-X<<" "<<endl;
      }
      return 0;
}