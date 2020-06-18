#include <iostream>


void show_(int arr[])
{
    for (int i = 0; i < 10; ++i)
        std::cout << arr[i] << ' ';
    std::cout << "\n";
}

void ins_sort(int arr[])
{
    for (int i = 1; i < 10; ++i)
    {
        int x = arr[i];
        int j = i;
        while (j > 0 && arr[j - 1] > x)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = x;
    }
}

int main()
{
    int arr[] = { 3,1,6,7,10,2,8,4,11,5 };
    show_(arr);
    ins_sort(arr);
    show_(arr);
    return 0;
    //ok
}