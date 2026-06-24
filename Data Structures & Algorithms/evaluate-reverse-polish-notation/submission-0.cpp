class Solution {

    long resolve(int a,int b,char ope){
        if (ope == '+')
            return a+b;
        else if (ope == '-')
            return a-b;
        else if (ope == '*')
            return (long)a*b;
        return a/b;
    }

public:
    int evalRPN(vector<string>& tokens) {
        stack<long> sta;
        int n = tokens.size();
        for (int i=0;i<n;i++){
            if (tokens[i].size() == 1 and tokens[i][0]<48){
                long int2 = sta.top();
                sta.pop();
                long int1 = sta.top();
                sta.pop();

                string ope = tokens[i];
                long ans = resolve(int1,int2, ope[0]);
                sta.push(ans);
            }else
                sta.push(stol(tokens[i]));
        } 
        return sta.top();
    }
};