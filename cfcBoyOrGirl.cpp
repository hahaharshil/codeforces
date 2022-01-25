// If size is odd then male
// else female

#include <bits/stdc++.h>

using namespace std;

int main(){
    string element; cin >> element;
    int size;int duplicate = 0;
    vector<char> v;
    vector<char> w;
    for(int i = 0; i < element.size(); i++){
      v.push_back(element[i]);
    }
    for(int i = 0; i < element.size(); i++){
      if(count(w.begin(), w.end(), v[i])){
        duplicate++;
      }else{
        w.push_back(v[i]);
      }
    }
    size = element.size() - duplicate;

    if(size%2 == 0){
      cout << "CHAT WITH HER!" << endl;
    }else{
      cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
