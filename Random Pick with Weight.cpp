class Solution {
    vector<int>x;
public:
    Solution(vector<int>& w) {
        int sum=0;
        for(int i=0;i<w.size();i++)
        {
            sum=sum+w[i];
            // for(int j=0;j<w[i];j++)
            // {
            //     x.push_back(i);
            //     cout<<i<<"\t";
            // }
            //x.insert(x.end(), w[i], i);
            x.push_back(sum);

        }
    }

    int pickIndex() {
        int y=rand()%x[x.size()-1];
        int l=0,r=x.size()-1;
        while(l<r)
        {
           int m=(l+r)/2;
            if(x[m]<=y)
                l=m+1;
            else
                r=m;
        }
        return l;
       // return x[rand()%x.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
