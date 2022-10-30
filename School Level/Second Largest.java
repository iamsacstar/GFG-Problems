//Given an array Arr of size N, print second largest element from an array.

//User function Template for Java

class Solution {
    int print2largest(int arr[], int n) {
        // code here
        int max =-1;
        for(int i=0; i<arr.length;i++)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
        }
        int max1=-1;
        for(int i=0; i<arr.length;i++)
        {
            if(max1<arr[i] && arr[i] != max)
            {
                max1 = arr[i];
            }
        }
        return max1;
    }
}                                                                                  
