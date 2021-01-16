#include <iostream>
#include <string>

using namespace std;

int arr_index(int arr[], int ind){
    if(arr[ind] == ind)
        return ind;
    else
        return arr_index(arr, ind + 1);
}

int main(){
    int a[] = {1,2,2,4,5,6};
    int index = 0;
    cout << "Checking if magic index exists in given array is " << arr_index(a, index) << endl;
}