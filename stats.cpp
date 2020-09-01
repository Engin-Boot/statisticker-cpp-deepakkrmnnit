#include "stats.h"
float averageOfArray(const std::vector<float>& array)
{
    float sum = 0;
    int count = 0;
    for (unsigned int i = 0;i < array.size();i++)
    {
        sum = sum + array[i];
        count++;
    }
    return sum/count;
}
float maxOfArray(const std::vector<float>& array)
{
    float max = array[0];
    for (unsigned int i = 0;i < array.size();i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return Max;
}
float minOfArray(const std::vector<float>& array)
{
     float min = array[0];
    for (unsigned int i = 0;i < array.size();i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}


Stats arraySizeGreaterThanZero(const std::vector<float>& array)
{
    Stats s;
    s.average = averageOfArray(array);
    s.max = maxOfArray(array);
    s.min = minOfArray(array);
    return s;
}
Stats Statistics::ComputeStatistics(const std::vector<float>& array) {
    if (array.size() == 0)
    {
        Stats s;
        s.average = 0.0;
        s.max = 0.0;
        s.min = 0.0;
        return s;
    }
    return arraySizeGreaterThanZero(array);
}
