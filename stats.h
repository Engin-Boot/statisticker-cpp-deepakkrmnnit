#include <vector>
//
#include<iostream>
struct Stats
{
    float average;
    float max;
    float min;
    
};
//
Stats arraySizeGreaterThanZero(const std::vector<float>&)
{
    float sum = 0;
    int count = 0;
    float max = array[0];
    float min = array[0];
    for (unsigned int i = 0;i < array.size();i++)
    {
        sum = sum + array[i];
        count++;
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    Stats s;
    s.average = sum / count;
    s.max = max;
    s.min = min;
    return s;
    
}

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}
