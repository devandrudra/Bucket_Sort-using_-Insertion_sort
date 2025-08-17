#ifndef insertion_H
#define insertion_H

#include<iostream>
using namespace std;
#include<vector>

class InsertionSort
{
    public:
    void Insertion_Sort(vector<float> &arr)
    {
        for(int i = 1; i < arr.size(); i++)
        {
            float temp = arr[i];
            int k = i-1;
            while(temp < arr[k] && k >= 0)
            {
                arr[k+1] = arr[k];
                k--;
            }
            arr[k+1] = temp;
        }
    }
};

#endif
// int main()
// {
//     vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
//     InsertionSort obj;
//     obj.Insertion_Sort(arr);

    // vector<int> :: iterator itr;
    // for(auto itr = arr.begin();  itr != arr.end(); itr++)
    // {
    //     cout << *itr << " ";
    // }
//     return 0;
// }