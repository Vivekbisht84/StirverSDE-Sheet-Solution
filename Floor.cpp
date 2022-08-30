#include<iostream>
using namespace std;

int lowerBound(int arr[] ,int n, int x){
    int s = 0;
    int e = n - 1;
    int ans = -1;

    while(s<=e){
        int mid = s + (e -s)/2;

        if(arr[mid] == x){
            return mid;
        }

        else if(arr[mid] < x){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cin>>x;
    int finalAns = lowerBound(arr,n,x);
    cout<<finalAns<<endl;
}