#include "stats.h"
#include <math.h>
#include <stdio.h>
#include "alerters.h"

Stats compute_statistics(const float* numberset, int setlength) {
    float sum, maximum, minimum;
    int i;//control variable for for-loop
    Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    if(setlength>0)
    {
    	maximum = numberset[0];
    	minimum = numberset[0];
    	sum = numberset[0];
	    for(i=1;i<setlength;i++)
	    {
	        sum += numberset[i];
	        maximum = MAX(maximum,numberset[i]);
	        minimum = MIN(minimum,numberset[i]);
	    }
	    s.average = sum/setlength;
	    s.min = minimum;
	    s.max = maximum;
	    
	    return s;
	  }else
	  {
		  s.average = NAN;
	    s.min = NAN;
	    s.max = NAN;
	    return s;
	  }
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
