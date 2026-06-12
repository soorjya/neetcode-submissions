class Solution {
public:
    int maxProfit(vector<int>& price) {
        int l =0,r=1;
        int maxp = 0;

        while(r<price.size()){
            if(price[l]<price[r]){
                int prof = price[r]-price[l];
                maxp = max(maxp, prof);
            }else{
                l=r;
            }
            r++;
        }
        return maxp;
    }
};
