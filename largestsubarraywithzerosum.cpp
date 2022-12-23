class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
       unordered_map<int,int>mp;
       int maxi=0; //stores the length of maximum subarray
       int sum=0;// prefix sum
       for(int i=0;i<n;i++){
           sum+=A[i];
           if(sum==0){
               maxi=i+1;
           }
           else{
               if(mp.find(sum)!=mp.end()){
                   maxi=max(maxi, i-mp[sum]);
               }
               else{
                   mp[sum]=i;
               }
           }
       }
       return maxi;
    }
};
