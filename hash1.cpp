#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
  int n,q;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  unordered_map<int, int> freq;
  for(int x:a){
    freq[x]++;
  }
  cin>>q;
  for(int i=0;i<q;i++){
    int num;
    cin>>num;
    cout<<freq[num]<<endl;
  }
  return 0;
}