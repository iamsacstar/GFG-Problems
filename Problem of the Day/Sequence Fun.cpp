//You have a sequence 2,5,16,65,........Given an integer n as input . You have to find the value at nth position in the sequence.

//User function Template for C++
class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		    long v = 2, mult = 2;
		    for(int i = 2; i <= n; i++){
		        v=(v*mult);  
		        mult++;
		        v++;
		        v%=1000000007;
		      //  cout << v << endl;
            }
		    return v;
		}

};
