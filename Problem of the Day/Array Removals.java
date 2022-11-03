/*Given an array arr[] of size N and an integer K. The task is to find the minimum number of elements that should be removed, such that Amax-Amin<=K.
After the removal of elements, Amax and Amin is considered among the remaining elements. 

Note: Can you solve the probelm without using any extra space and O(N*log(N)) time complexity?*/


class Solution {
    int removals(int[] arr, int n, int k) {
        // code here
        Arrays.sort(arr);
        int i=0,j=0;
        int ans=0;
        while(j<n)
        {
            while(arr[j]-arr[i]>k)
            {
                i++;
            }
            j++;
            ans=Math.max(ans,j-i);
        }
        return n-ans;
    }
}
