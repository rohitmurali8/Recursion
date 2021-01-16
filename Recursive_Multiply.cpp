#include <iostream>
#include <string>

using namespace std;

int recur_mul(int a, int b){
    if(b == 0)
        return 0;
    else
        return recur_mul(a, b - 1) + a;
}

int main(){
    int a = 12;
    int b = 10;
    int mul = recur_mul(a,b);
    cout << "The multiplication done recursively gives us " << mul << endl;
    return 0;
}