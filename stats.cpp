#include "stats.h"

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
