#include <stdio.h>
#include "RangeandFrequency.h"

rangeandfrequency getrange(int *Samples)
{
  crangeandfrequency range;
  range.min = Samples[0];
  range.max = Samples[1];
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
     comp = Samples[i+1] - Samples[i];
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

