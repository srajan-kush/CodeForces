#include <iostream>
#include <vector>
using namespace std;


int abc = 0;

void swap(vector<int>& arr, int i, int j) {

    if(arr[i] == arr[j]) return;

    abc++;

    cout << "Swapping " << arr[i] << " and " << arr[j] << '\n';
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

bool compare(vector<int>& arr,vector<int>& finalOrder){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != finalOrder[i]) return false;
    }
    return true;
}


void permute(vector<int>& arr,vector<int>& finalOrder, int start, int end) {
    
    if(compare(arr,finalOrder)) return true;

    for (int i = start; i <= end; i++) {
        swap(arr, start, i);       
        if(permute(arr,finalOrder, start + 1, end)) return true;
        swap(arr, start, i);
    }

    return false;
}

int main(){

    int n;
    cin >> n;

    vector<int>initialOrder(n);
    vector<int>finalOrder(n);

    for(int i = 0; i < n; i++){
        cin >> finalOrder[i];
        initialOrder[i] = i + 1;
    }

    permute(initialOrder,finalOrder, 0, n - 1);

    cout << abc;

    return 0;
}