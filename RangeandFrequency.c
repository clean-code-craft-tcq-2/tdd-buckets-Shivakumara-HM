#include <stdio.h>
#include <stdlib.h>
#include "RangeandFrequency.h"

// Sorting the input samples
int CompareInputs (const void * firstInput, const void * secondInput) 
{
    return ( *(int*)firstInput - *(int*)secondInput );
}

int* SortArray(int *CurrentSamples, int NoOfSamples) 
{
    qsort(CurrentSamples,NoOfSamples,sizeof(int),CompareInputs);
    int* SortedCurrentSamples = CurrentSamples;
    return SortedCurrentSamples;
}

// find the min, max and number of occurances of the samples
int SamplesRangeCount(int* SortedCurrentSamples, int NoOfSamples)
{
  int NoofOccurance=0;
  int FromRange = SortedCurrentSamples[0];
  int ToRange = SortedCurrentSamples[NoOfSamples - 1];
  for(int i=0;i<NoOfSamples;i++)
  {
    if((FromRange <= SortedCurrentSamples[i]) && (ToRange >= SortedCurrentSamples[i]))
    {
      NoofOccurance++;
    }
    else
    {
      /*do nothing */
    }
  }
  SendDataToPrint(FromRange ,ToRange ,NoofOccurance);
  return NoofOccurance;
}

//print the data on console
void PrintonConsole(char * InputData)
{
  printf("%s",InputData);
}

void SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance )
{
  char PrintData[100];
  sprintf(PrintData,"%d-%d,%d\n",FromRange,ToRange,TotalOccurance);
  PrintonConsole(PrintData);
}

int ReadNoOfSamples(int *CurrentSamples, int NoOfSamples)
{
  int *SortedCurrentSamples = SortArray(CurrentSamples,NoOfSamples);
  int NoOfSequenceSample = SamplesRangeCount(SortedCurrentSamples,NoOfSamples);
  return NoOfSequenceSample;  
}

