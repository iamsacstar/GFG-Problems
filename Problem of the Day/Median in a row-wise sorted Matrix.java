//Given a row wise sorted matrix of size R*C where R and C are always odd, find the median of the matrix.




//User function Template for Java

class Solution {
    int median(int matrix[][], int R, int C) {
        // code here
        class Solution {

    int median(int matrix[][], int R, int C) {

        int size = R*C;

        int[] arr = new int[size];

        int index = 0;

        int i=0,j=0;

        while(i<R && j<C)   

        {

                

            arr[index++] = matrix[i][j++];

            

            if(j==C && i!=R-1)

            {

                j=0;

                i++;

            }

        }

        

        Arrays.sort(arr);

        int median = (size+1)/2;

        return arr[median-1];

    }
