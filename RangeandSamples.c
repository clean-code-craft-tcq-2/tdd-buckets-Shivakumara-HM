#include <stdio.h>
#include "RangeandSamples.h"

currentrange getrange(int *Samples)
{
  currentrange range;
  range.min = findminvalue;
  range.max = findmaxvalue;
  range.count = getfrequency(Samples);
  return range;
}


int getfrequency(int *Samples)
{
  int lengthofinput;
  int comp = 1;
  int frequency;
  lengthofinput = sizeof(Samples) / sizeof(Samples[0];
  for(i=0; i<= lengthofinput ;i++)
  {
     comp = Samples[i+1] - CurrentSamples[i];
     if((comp == 0) || (comp == 1) || (comp==2))
        {
          frequency++;
        }
        else
        {
          frequency = 0;
        }
    }
  return frequency;
}

