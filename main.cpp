#include "insertion_sort.cpp"

class BucketSort
{
    public:
    vector<vector<float>> bucket(vector<float> arr, int n)
    {
        vector<vector<float>> Bucket(n);
        for(int i = 0; i < arr.size(); i++)
        {
            int index = arr[i]*n;
            Bucket[index].push_back(arr[i]);

        }
        return Bucket;
    }
    void Bucket_Sort(vector<float> &arr, int n)
    {
        InsertionSort obj;
        vector<vector<float>> Bucket = this -> bucket(arr, n);
        for(int i = 0; i < n; i++)
        {
            obj.Insertion_Sort(Bucket[i]);
        }
        int k = 0;
        for(int i = 0; i < Bucket.size(); i++)
        {
            for(int j = 0; j < Bucket[i].size(); j++)
            {
                arr[k] =Bucket[i][j];
                k++;
            }
        }

    }
};

int main()
{
    BucketSort obj;
    InsertionSort obj1;
    vector<float> arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434, 0.611};
    int n = 10;


    cout << "Bucket Display: " << endl;
    vector<vector<float>> b = obj.bucket(arr, n);
    for(int i = 0; i < b.size(); i++)
    {
        cout << i << "->";
        for(int j = 0; j < b[i].size(); j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    

    cout << "Bucket After Performing Insertion Sort: " << endl;
    for(int i = 0; i < n; i++)
    {
        obj1.Insertion_Sort(b[i]);
    }

    for(int i = 0; i < b.size(); i++)
    {
        cout << i << "->";
        for(int j = 0; j < b[i].size(); j++)
        {
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }

    //main operation
    cout << "Sorted Araay: " << endl;
    obj.Bucket_Sort(arr, n);
    vector<int> :: iterator itr;
    for(auto itr = arr.begin();  itr != arr.end(); itr++)
    {
        cout << *itr << " ";
    }
    return 0;
}