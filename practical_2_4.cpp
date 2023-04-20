#include <iostream>
using namespace std;

int main() 
{
    int nums[10], sum = 0;
    double avg;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> nums[i];
        sum += nums[i];
    }
    avg = (double) sum / 10.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    for (int i = 0; i < 9; i++)
	{
        for (int j = i+1; j < 10; j++) 
		{
            if (nums[i] > nums[j])
			{
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < 10; i++)
	{
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

