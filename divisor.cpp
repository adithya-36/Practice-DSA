#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
      vector<int> result;
      int sq=sqrt(n);
        for(int i=1;i<=sq;i++){
            if(n%i==0){
                result.push_back(i);
            }
            if(i!=n/i){
              result.push_back(n/i);
            }
        }
        return result;
    }
};
int main(){
  int n;
  cout<<"Enter an integer: ";
  cin>>n;
  Solution obj;
  vector<int> res=obj.divisors(n);
  for(int x:res){
    cout<<x<<endl;
  }
  return 0;
}