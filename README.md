# 問題分類

## DFS
- [ABC213_D](https://atcoder.jp/contests/abc213/tasks/abc213_d)
  - シンプルなDFS。```vector<pair<int,int>>```はソートすると```second```もソートされると思っていたが違うっぽい？そこだけ直したらACした。
- [ABC209_D](https://atcoder.jp/contests/abc209/tasks/abc209_d)
  - 最小共通祖先。シンプルなDFSだけど初見で解けなかった。DFSで無限再帰を防ぐには既出のノードをチェックする配列を持つ。
