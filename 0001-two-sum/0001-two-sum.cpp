class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
   // Write your code here.
  int n=  nums.size();
    vector<int>temp;
   
    for(int i=0; i<n-1; i++ ){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j]==target){
                
                temp.push_back(i);
                temp.push_back(j);
                
            }   
            
            
        }
         
    }return temp; 
    }
};