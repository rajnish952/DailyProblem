/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include <iostream>
#include <vector>

using namespace std;

bool solNsquare(vector<int> arr, int k)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (size_t j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == k)
                return true;
        }
    }
    return false;
}
bool solN(vector<int> arr, int k)
{
    int p1 = 0, p2 = arr.size() - 1;
    while (p1 < p2)
    {
        if (arr[p1] + arr[p2] == k)
            return true;
        p1++;
        p2--;
    }
    return false;
}
int main()
{

    vector<int> myvector;
    int n, k, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        myvector.push_back(x);
    }
    cin >> k;
    cout << "With N-Square solution " << solNsquare(myvector, k) << "\n";
    cout << "With N solution " << solN(myvector, k) << "\n";
    return 0;
}