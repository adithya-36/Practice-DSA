#include <iostream>
#include <set>
using namespace std;
int main(){
  set<int> s={90,30,40,75,85};
  s.insert(60);
  s.insert(10);
  s.insert(50);
  s.insert(20);
  s.insert(40);
  s.insert(10);
  s.insert(60);
  s.insert(50);
  s.insert(10);
  s.insert(20);
  s.insert(20);
  set <int> :: iterator it;
  for(it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
  auto it1=s.begin();
  auto it2=next(it1,5);
  cout<<*it1<<" "<<*it2<<endl;

  auto it3=s.find(85);
  if(it3!=s.end()) cout<<*it3;
  else cout<<"Element not found";
  s.erase(it3);
  cout << "After erasing :";
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;
  return 0;
}