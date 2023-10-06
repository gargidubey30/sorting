#include <bits/stdc++.h>
using namespace std;
void sortArray(int n, vector<int> &arr){
int high=n-1;
int mid=0;
int low=0;
while(mid<=high){


    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;

    }
     else if(arr[mid]==1){
        mid++;
        
    }
    else{
         swap(arr[mid],arr[high]);
        high--;
    }
}
}


int main()
{

vector<int>arr={0,2,1,2,0,1};
int n=arr.size();
sortArray(n,arr);
cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}