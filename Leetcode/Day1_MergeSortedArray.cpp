/*Problem Description 
The problem is to merge two sorted integer arrays, nums1 and nums2, into a single sorted array. 
The merged result should be stored in nums1. The initial length of nums1 is m, and the initial length of nums2 is n. 
The array nums1 has enough space to hold all elements from both arrays (i.e., its size is m + n).*/

/*Approach 

Three pointers are used:
-a =nums1 (m - 1).
-b=nums2 (n - 1).
-c points to the last position of the merged array, which is the end of nums1 (m + n - 1).

-In each step, the larger of the two elements is placed at the position c in nums1.
-The pointers are then decremented accordingly (a--, b--, and c--).
-This process continues as long as there are elements left in nums2 (b >= 0).
-The loop terminates when all elements from nums2 have been merged into nums1. 
-Any remaining elements in nums1 (pointed to by a) are already in their correct, sorted position, so no further action is needed for them.*/

//code
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int a=m-1;
       int b=n-1;
       int c=m+n-1;

       while(b>=0){
        if(a>=0&& nums1[a]>nums2[b]){
            nums1[c--]=nums1[a--];
        }
        else{
            nums1[c--]=nums2[b--];
        }
       } 
    }
};
