/*Initially, the zoo have a single chick. A chick gives birth to 2 chicks every day and the life expectancy of a chick is 6 days.
Zoo officials want to buy food for chicks so they want to know the number of chicks on an Nth day. Help the officials with this task.*/
 



class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
	    vector<long long int>vec(n,0);
	    vec[0] = 1;
	    long long int dup = 1;
	    for(int i=1; i<n; i++){
	        if(i>5)
	            dup=dup-vec[i-6];
	        vec[i]=dup*2;
	        dup+=vec[i];
	    }
	    return dup;
	}
};
