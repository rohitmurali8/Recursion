#include <iostream>
#include <string>

using namespace std;

int num_ways(int n){
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return num_ways(n-1) + num_ways(n-2) + num_ways(n-3);
}

int main(){
    int steps = 6;
    cout << "The number of ways for a child to reach the top are " << num_ways(steps) << endl;
}