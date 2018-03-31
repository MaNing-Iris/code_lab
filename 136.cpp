//
//  main.cpp
//  136 single number
//
//  Created by 马宁 on 31/03/2018.
//  Copyright © 2018 马宁. All rights reserved.
//

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

//class Solution {
//public:
int singleNumber(vector<int>& nums) {
    
    for(int i = 1; i < nums.size(); ++i)
        nums[0] ^= nums[i];
    
    return nums[0];
    
}
//};

int main() {
    // insert code here...
    vector<int> nums={1,2,3,2,1};
    cout<<singleNumber(nums)<<endl;
    return 0;
}

