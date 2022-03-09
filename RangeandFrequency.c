#include <stdio.h>
#include "RangeandFrequency.h"

int getfrequency(int *Samples)
{
  int lengthofinput;
  int comp = 1;
  int frequency;
  rangeandfrequency range;
  range.min = Samples[0];
  range.max = Samples[1];
  
  lengthofinput = sizeof(Samples);
  for(int i=0; i<= lengthofinput; i++)
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
  printf("%d-%d, %d\n", range.min, range.max, frequency);
  return frequency;
}

