/* Problem
Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.*/

/* Approach
One Pass Search
The idea is to keep track of the largest and second largest element while traversing the array. Initialize largest and secondLargest with -1. Now, for any index i,

-If arr[i] > largest, update secondLargest with largest and largest with arr[i].
-Else If arr[i] < largest and arr[i] > secondLargest, update secondLargest with arr[i]. */

//code

#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
       
        int n=arr.size();
        
        int LargestElement=-1, SecondLargest=-1;
        
        for(int i=0; i<n;i++){
        if(arr[i]>LargestElement){
            SecondLargest=LargestElement;
            LargestElement= arr[i];
        }
        else if( arr[i]<LargestElement && arr[i]>SecondLargest){
            SecondLargest=arr[i];
        }
    }
    return SecondLargest;
}
};
