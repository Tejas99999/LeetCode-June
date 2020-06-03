class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,int>>v;
        int sum=0;
        for(int i=0;i<costs.size();i++)
        {
            int s=abs(costs[i][0]-costs[i][1]);
            v.push_back(make_pair(s,i));
            // if(costs[i][0]<costs[i][1])
            //     sum=sum+costs[i][0];
            // else
            //     sum=sum+costs[i][1];
        }
        sort(v.begin(),v.end(),greater<>());
        int acount=0,bcount=0;
        for(int i=0;i<v.size();i++)
        {
            if(acount<v.size()/2&&bcount<v.size()/2)
            {
                if(costs[v[i].second][0]<costs[v[i].second][1])
                {
                    sum=sum+costs[v[i].second][0];
                    acount++;
                }
                else
                {
                    sum=sum+costs[v[i].second][1];
                    bcount++;
                }
            }
            else if(acount<v.size()/2)
            {
                 sum=sum+costs[v[i].second][0];
                    acount++;
            }
            else
            {
                sum=sum+costs[v[i].second][1];
                    bcount++;
            }
        }
        return sum;
    }
};
