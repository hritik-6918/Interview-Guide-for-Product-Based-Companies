#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    int count = 0;
    int element = -1;
    for(int i =0; i<n; i++) {
        if(count==0){
            element = arr[i];
            count = 1;
            continue;
        }
        if(arr[i] ==element){
            count++;
        }
        else{
            count--;
        }
    }
    
    count = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i]==element){
            count++;
            
        }
    }
    if(count>(n/2)){
        return element;
    }
 
        return -1;
}
