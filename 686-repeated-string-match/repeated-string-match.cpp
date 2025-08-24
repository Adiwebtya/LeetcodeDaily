class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string rep = a;
        int count = 1;
        
        while(rep.size() < b.size()){
            rep += a;
            count++;
        }

        if(rep.find(b) != b.string :: npos)return count;

        rep += a;
        count++;

        if(rep.find(b) != b.string :: npos)return count;
        return -1;
    }
};