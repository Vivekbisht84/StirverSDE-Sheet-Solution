#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
	long long int curr = 0;
	long long max = 0;
	
	for(int i = 0 ; i < n ; i++){
		curr+=arr[i];
		
		if(curr >= max){
			max = curr;
		}
		
		if(curr < 0){
			curr = 0;
		}
	}return max;
}