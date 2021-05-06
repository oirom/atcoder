#include <bits/stdc++.h>
using namespace std;

string S;
int N, K;
int nex[100009][26];

int main() {

    cin >> N >> K;
    cin >> S;

    for (int i=0; i<26; i++) nex[S.size()][i] = S.size();
    // 末尾から回すため上の nex[S.size()][] = S.size() が効いてくる
    for (int id=(int)S.size()-1; id>=0; id--) {
        for (int ASCII=0; ASCII<26; ASCII++) {
            // i文字目以降にある文字(ASCII表現)のうち、もっとも左に位置するもののindex
            if ((int)(S[id]-'a')==ASCII) {
                nex[id][ASCII] = id;
            } else {
                nex[id][ASCII] = nex[id+1][ASCII];
            }
        }
    }

    // bacbcba
    // b[a(1)]cbcba : "a"
    // b[a(1)]cbcb[a(6)] : "a"
    // b[a(1)]c[b(3)]cba : "ab"


    string Answer = "";
    int CurrentPos = 0;
    // 長さ K の文字列を作るので K 回まわす
    for (int Digit=1; Digit<=K; Digit++) {
        for (int ASCII=0; ASCII<26; ASCII++) {
            // S の先頭から末尾まで a-z の順で文字を探していく
            int NexPos = nex[CurrentPos][ASCII];
            // (7 - 1 - 1) + 1
            // MaxPossibleLength は走査可能な残りの文字列の長さ??
            int MaxPossibleLength = (int)(S.size()-NexPos-1) + Digit;
            // [走査可能な残りの文字列の長さ+既製文字列長]が、
            // 要求されている文字列長以上なら
            if (MaxPossibleLength >= K) {
                Answer += (char)('a' + ASCII);
                CurrentPos = NexPos + 1;
                break; 
            }
        }
    }

    cout << Answer << endl;

    return 0;
}