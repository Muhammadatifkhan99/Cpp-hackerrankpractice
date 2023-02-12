#include <iostream>
using namespace std;

int main() {
    
    int n =6;
    int count = {0};
    int arr[7] = {1,4,3,3,2,3,3};    
    for(int i=0;i<7;i++){
        for (int j=i+1;j<7;j++){
            if (arr[i] == arr[j+1])
            count ++;
        }
    }
    return 0;
}
