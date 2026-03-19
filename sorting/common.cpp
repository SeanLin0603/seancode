#include"common.h"
using namespace std;

vector<int>genInputVector(int size, int min, int max)
{
    vector<int> result(size);

    for(int i=0; i<result.size(); i++)
    {
        result[i] = min + rand() % (max-min-1);
    }
    
    return result;
}
