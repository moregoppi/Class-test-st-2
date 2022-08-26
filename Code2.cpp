//Name:- Gurpreet Singh, Roll no:-2010990249,  Set no.:-Test 02
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}

vector<pair<int, int>> sortmap(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;
    
    for(auto& p: mp)
        v.push_back(p);
        
    sort(begin(v), end(v), cmp);
    return v;
}

int main()
{
    unordered_map<int, int> mp;
    //declaring the size of array 
    int size;
    cin>>size;
    int a, b;
    for(int i=0; i<size; i++){
        //taking the input of every element of array from user
        cin>>a>>b;
        mp[a] = b;
    }
    
    vector<pair<int, int>> result = sortmap(mp);
    for(auto& x: result){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}
