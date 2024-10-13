#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int> arr;
  int x;
  while(cin>>x){
    arr.push_back(x);
  }
  int ans = 0;
  for(int x:arr){
    ans = ans ^ x;
  }
  cout<<ans<<endl;
  return 0;
}