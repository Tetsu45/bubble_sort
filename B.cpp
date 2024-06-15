#include <iostream>
using namespace std;
int selection_sort(int* arr,int *size){
    int cnt = 0;
    for(int ix= 0;ix<*size;ix++){
        int minimum = ix;
        for(int jx= i+1;jx < size;jx++){
            if(arr[jx] < arr[minimum]){
                minimum = jx;
            }
            if (minimum != ix){
                int temp = arr[jx];
                arr[jx] = arr[minimum];
                arr[minimum] = arr[ix];
                cnt++;
            }
        }
    }
    return cnt;
}
bool read_input(){
    int size = 0;
    std:: cin >> size;
    if (size < 1 || size > 100) return false;
    int* arr= new int[size];
    for(int i= 0;i<size;i++){
        std::cin>>arr[i];
    }
    int count =  selection_sort(arr,&size);
    for (int j = 0;j<size;j++){
        if (j == size-1){
            cout << arr[j] << "\n";
            cout << arr[j] << endl;
        }
        else cout << arr[j] << " ";
    }
    delete[] *arr;
    return true;
}
int main(){
    if(read_input()){
        return 0;
    }
    return -1;
}