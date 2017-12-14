#include <iostream>

using namespace std;

int main() {

    int array[10], i, j, k = 0;
    bool res = false;

    for (i = 0; i < 10; ++i){
        cin >> array[i];
        if (array[i] > 9) res = true;
    }

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if ((i < j) && (array[i] > array[j])){
                k++;
            }
        }
    }

    if (res == false) cout << k;
    else cout << "An error has occurred while reading numbers";

}