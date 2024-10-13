#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr;
    int x;

    while(cin >> x){
        arr.push_back(x);
    }
    int size = arr.size();
    // cout<<arr.size()<< endl;
    for(int x:arr){
        cout<<x<<" ";   
    }

    for(int i=0;i<size-1;i+=2){
        if(i+1 < size){
            int temp = arr.at(i);
            arr.at(i) = arr.at(i+1);
            arr.at(i+1) = temp; 
        }
    }
    cout<<endl;
    for(int x:arr){
        cout<<x<<" ";   
    }

    return 0;
}
