#include <bits/stdc++.h>

using namespace std;

int get_sum_of_odds(vector<int> nums){

    int sum = 0;

    for(int i = 0; i < nums.size(); i++){
        
        if(nums[i] % 2){
            sum += nums[i];
        }
    }

    return sum;
}

int get_sum_of_evens(vector<int> nums){
    int sum = 0;

    for(int i = 0; i < nums.size(); i++){

        if(nums[i] % 2 == 0){
            sum += nums[i];
        }
    }

    return sum;
}

int main(){

    vector<int> nums = {11,2,3,8,5};

    int sum_of_odd_elements = get_sum_of_odds(nums);

    int sum_of_even_elements = get_sum_of_evens(nums);

    cout << "Sum of odd elements: " << sum_of_odd_elements << endl;
    cout << "Sum of even elements: " << sum_of_even_elements << endl;
}
