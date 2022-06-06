#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    while(e>=s){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return arr;
}

void printArray(vector<int>arr){
    for(int i=0; i<arr.size(); i++){
        cout<<" "<<arr[i];
    }
}
int main(){
    vector<int>arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    cout<<"Array before reversing : ";
    printArray(arr);
    vector<int>ans = reverseArray(arr);
    cout<<endl<<"Array after reversing : ";
    printArray(ans);


    return 0;
}