#include <bits/stdc++.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main(){
    
    int p=0;
    string S;
    cin >> S;
    reverse(S.begin(), S.end());

    string word[4] = {"maerd", "remaerd", "esare", "resare"};

    bool can=true;
    for(int i=0; i<S.size();){
        bool can2=false;
        rep(j,4) {
            string w = word[j];
            if (S.substr(i,w.size())==w) {
                can2=true;
                i+=w.size();
            }
        }
        if (can2==false){
            can=false;
            break;
        }
    }
    if (can) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}