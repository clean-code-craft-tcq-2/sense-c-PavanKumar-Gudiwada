#include "stats.h"

struct
{
  float average;
  float min;
  float max;
}Stats;

struct Stats compute_statistics(const float* numberset, int setlength) {
    float sum, maximum, minimum;
    int i;//control variable for for-loop
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    for(i=0;i<setlength;i++)
    {
        sum += numberset[i];
        maximum = MAX(maximum,numberset[i]);
        minimum = MIN(minimum,numberset[i]);
    }
    s.average = sum/setlength;
    s.min = minimum;
    s.max = maximum;
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
