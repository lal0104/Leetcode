class Solution {
public:
    static bool cmp(string a ,string b)
    {
        string t1 =a+b;
        string t2 = b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(auto num: nums)
        {
            //convert no. to string with the help of to_string(num)
            s.push_back(to_string(num));
        }
        // learn the usage of cmp properly
        sort(s.begin(),s.end(),cmp);
        string ans="";
        if(s[0]=="0") return "0";
        for(auto num:s)
        {
            //concatenation
            ans+=num;
        }
        return ans;
    }
};