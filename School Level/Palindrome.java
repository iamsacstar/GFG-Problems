//Given an integer, check whether it is a palindrome or not.



//User function Template for Java

class Solution
{
    public String is_palindrome(int n)
    {
        // Code here
        int temp = n , sum = 0;
        if(temp<0){
            return "No";
        }
        while (temp !=0){
            int num = temp % 10;
            sum = (sum*10)+num;
            temp = temp/10;
        }
        if(sum == n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
}
