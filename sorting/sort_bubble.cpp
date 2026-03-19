#include"common.h"
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(vector<int>& input)
{
    for(int i=0; i<input.size(); i++)
    {
        for(int j=i+1; j<input.size(); j++)
        {
            if(input[i] > input[j])
                swap(input[i], input[j]);
        }
    }
}

int main() {
    srand(time(0));
    vector<int> input = genInputVector(10, 0, 30);

    cout << "input vector=\t";
    for(int i=0; i<input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    bubble_sort(input);

    cout << "after sorting=\t";
    for(int i=0; i<input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    return 0;
}