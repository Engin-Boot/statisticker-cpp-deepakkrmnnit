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
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& );
}
