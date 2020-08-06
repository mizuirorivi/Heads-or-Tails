#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cout << "Who are you?" << endl << "> ";
    cin >> name;
    cout << "Hello," << name << "!" << endl;
    std::random_device rnd;     // 非決定的な乱数生成器を生成
    std::mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(0, 99);  // [0, 99] 範囲の一様乱数
    cout << "Tossing a coint..." << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Round " <<  i+1  << ":";
        if(rand100(mt)&1) cout << "Heads" << endl;
        else cout << "Tails" << endl;
    }

}