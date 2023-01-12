#include <iostream> 
#include <vector>
using namespace std; 
int numWaterBottles(int numBottles, int numExchange) {
// https://leetcode.com/problems/water-bottles/
        int res = numBottles;  
        while (numBottles){
            numBottles = numBottles / numExchange; 
            res = res + numBottles; 
        }
        return res; 
    }
void swap (int * a, int * b){
    int temp = *a; 
    *a = *b; 
    *b = temp; 
    return; 
}
int removeElement(vector<int>& nums, int val) {
        // https://leetcode.com/problems/remove-element/
    int j = 0; 
    /* Idea: The first pointer is i and the second is j. 
        We use i to iterate through the array. J is increased when nums[i] 
        is different than val. Thus, when nums[j] = val, it will stay there 
        and nums[j] = nums[i] when nums[i] != val. 
        Video guide: https://www.youtube.com/watch?v=-gjxg6Pln50
    */
    for (int i = 0; i < nums.size() ; ++i){
        if (nums[i] != val){
            nums[j] = nums[i];
            j = j + 1;  
        }
    }
    return j; 
}
    vector<int> plusOne(vector<int>& digits) {
        //https://leetcode.com/problems/plus-one/
        int size = digits.size();
        if (digits[size - 1] != 9){
            ++digits[size - 1]; 
            return digits; 
        }
        int val = 1;
        for (int i = size - 1 ; i >= 0; --i){
                if (val == 1) ++digits[i]; 
                 if (digits[i] > 9) {
                     digits[i] = 0; 
                     val = 1; 
                 }
                 else {
                     val = 0; 
                     break; 
                 } 
        }
        if (val == 0) return digits; 
        digits.insert(digits.begin(),val); 
        return digits; 
    }
int main (){
    vector<int> in = {9};
    vector<int> res = plusOne(in); 
        for (int i : res) cout << i << " "; 

}