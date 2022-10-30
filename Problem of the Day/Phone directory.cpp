//Given a list of contacts contact[] of length n where each contact is a string which exist in a phone directory and a query string s. The task is to implement a search query for the phone directory. Run a search query for each prefix p of the query string s (i.e. from  index 1 to |s|) that prints all the distinct contacts which have the same prefix as p in lexicographical increasing order. Please refer the explanation part for better understanding.
//Note: If there is no match between query and contacts, print "0".

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>>res;

        vector<string>ans;

        for(int i=0;i<n;i++){

            if(find(ans.begin(),ans.end(),contact[i])==ans.end()){

            ans.push_back(contact[i]);

            }

        }

        sort(ans.begin(),ans.end());

        int i=0;

        for(i=0;i<s.length();i++){

            string r=s.substr(0,i+1);

            vector<string>rr;

            for(int i=0;i<ans.size();i++){

                string c=ans[i].substr(0,r.length());

                //cout<<"c-"<<c<<" ";

                if(r.compare(c)==0){rr.push_back(ans[i]);}

            }

            if(rr.empty()){

                rr.push_back("0");

                break;

            }

            ans=rr;

            res.push_back(rr);

            // cout<<endl;

            // cout<<r<<endl;

        }

        while(i<s.length()){

            res.push_back({"0"});

            i++;

        }

        return res;
    }
};
