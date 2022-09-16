// Kickstart 2022 Round A
// Problem 1 : Speed typing

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int T, MaxL, err, k, imp;
  MaxL = 100005;
  char I[MaxL];
  char P[MaxL];
  for(int i = 0; i < MaxL; i++) {
    I[i] = 0;
    P[i] = 0;
  }
  cin >> T;
  for(int t = 0; t < T; t++) {
    err = 0;
    imp = 0;
    cin >> I;
    cin >> P;
    k = 0;
    for(int i = 0; i < MaxL; i++) {
      while(k < MaxL){
        if(P[i+k] == 0 && I[i] != 0) {
          cout << "Case #" << t+1 << ": IMPOSSIBLE\n";
          imp = 1;
          k = MaxL;
          i = MaxL;
        }
        else if(P[i+k] != I[i]) {
          err++;
          k++;
        }
        else if(P[i+k] == 0 && I[i] == 0) {
          i = MaxL;
          break;
        }
        else break;

      }
    }
    if(imp == 0) cout << "Case #" << t+1 << ": " << err << "\n";
  }
  return 0;
}
