class Solution {
public:
    void sortColors(vector<int>& nums) {
        
     int cnt0 =0;
      int   cnt1 = 0;
      int  cnt2 = 0;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                cnt0++;
            }
            else if (nums[i]==1){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        for(int i=0; i<cnt0;i++){
            nums[i]=0;
        }
        
        for(int i=cnt0; i<cnt0+cnt1;i++){
            nums[i]=1;
        }
        
        for(int i=cnt0+cnt1; i<nums.size();i++){
            nums[i]=2;
        }
       
        
    }
};
    
    
    
    
    
    
    
    
    
    
    
    
    
            // int j=0;
//        while(cnt0-- && j<nums.size()){
//            nums[j]=0;
//            j++;
//        }
        
//         while(cnt1-- && j<nums.size()){
//            nums[j]=1;
//            j++;
//        }
//         while(cnt2-- && j<nums.size()){
//           nums[j]=2;
//            j++;
//        }
    
    
    
    
    
    
    
    
    
    
    
//         int n = nums.size();
//         int low = 0, mid = 0, high = n - 1; // 3 pointers

//     while (mid <= high) {
//         if (arr[mid] == 0) {
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if (arr[mid] == 1) {
//             mid++;
//         }
//         else {
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
//     }