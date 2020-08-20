#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    // 이 코드를 실행시키기 전에 하셔야 하는게 있소
    // sudo apt install sox
    // sudo apt install libsox-fmt-mp3
    cout<<"소리를 키겠소"<<endl;
    int ret = system("play example.mp3");
    cout<<"소리를 끄겠소"<<endl;
}