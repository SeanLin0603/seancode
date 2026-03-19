#include"common.h"
using namespace std;

void select_sort(vector<int>& input)
{

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

    // select_sort(input);

    cout << "after sorting=\t";
    for(int i=0; i<input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    return 0;
}