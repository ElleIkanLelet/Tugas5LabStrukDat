#include <iostream>
using namespace std;

int interpolationSearch(int data[], int n, int target) {
    int low = 0;
    int high = n - 1;
    
   while (low <= high && target >= data[low] && target <= data[high]) {

        if (data[low]) == data[high]{
            if(data[low] == target) {
                return low; //8
            }
            return -1;
        }    

        int pos = low + (int)(
            (double)(target - data[low]) / (data[high] - data[low]) * (high -low)
        );

        if (data[pos] == target) {
            return pos;
        } else if (data[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    
    return -1;
}