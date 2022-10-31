
//Given an array A[ ] of N of  integers, find the index of values that satisfy A + B = C + D where A,B,C & D are integers values in the array.
//Note: As there may be multiple pairs satisfying the equation return lexicographically smallest order of  A, B, C and D and return all as -1 if there are no pairs satisfying the equation.



class Solution {
  public:
    vector<int> satisfyEqn(int a[], int n) {
        // code here
        unordered_map<int, set<pair<int, int>>> mp;
        for(int i = 0; i < n; i++){
           for(int j = i + 1; j < n; j++){
               int sum = a[i] + a[j];
               mp[sum].insert({i, j});
               mp[sum].insert({j, i});
           }
       }
       for(int i = 0; i < n; i++){
           for(int j = i + 1; j < n; j++){
               int currSum = a[i] + a[j];
               if(mp.find(currSum) != mp.end()){
                   for(auto it : mp[currSum]){
                       if(it.first == i || it.first == j || it.second == i || it.second == j){
                           continue;
                       }
                       else{
                           return {i, j, it.first, it.second};
                       }
                   }
               }
           }
       }
       return {-1, -1, -1, -1};
    }
};
