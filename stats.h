#include <vector>
//
#include<iostream>
struct stats
{
    float average;
    float max;
    float min;
    
};
//
namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& array )//;
    {
        float sum=0;
        int count=0;
        float max=array[0];
        float min=array[0];
        for(int i=0;i<array.size();i++)
        {
            sum=sum+array[i];
            count++;
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }   
        }
        stats s;
        s.average=sum/count;
        s.max=max;
        s.min=min;
        return s;
    }
}
