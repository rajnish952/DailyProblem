/*
Given an array of integers, return a new array such that each element at index i of the new array is 
the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], 
the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
    {
        cin >> it;
    }
    long long prd = 1;
    for (auto a : arr)
    {
        prd *= a;
    }

    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        res.push_back(prd / arr[i]);
    }

    for (auto a : res)
    {
        cout << a << " ";
    }
    return 0;
}