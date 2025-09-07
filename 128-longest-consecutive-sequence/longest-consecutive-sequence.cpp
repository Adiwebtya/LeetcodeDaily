class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        if(pq.empty())return 0;

        int maxi = 1,ans = 1;
        int prev = pq.top();pq.pop();

        while(!pq.empty()){
            int curr = pq.top();pq.pop();
            if(prev+1 == curr)maxi++;
            else if(prev == curr){}
            else{maxi = 1;}

            ans = max(maxi,ans);
            prev = curr;
        }
        return ans;
    }
};