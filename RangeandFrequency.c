#include <stdio.h>
#include "RangeandFrequency.h"

int* SortArray(int *CurrentSamples, int NoOfSamples) 
{
    qsort(CurrentSamples,NoOfSamples,sizeof(int),CompareInputs);
    return CurrentSamples;
}

int CompareInputs (const void * firstInput, const void * secondInput) 
{
    return ( *(int*)firstInput - *(int*)secondInput );
}

int ReadNoOfSamples(int FromRange , int ToRange)
{
  int NoofOccurance=0;
  for(int i=0;i<TotalSamples;i++)
  {
    if((FromRange <= CurrentSamples[i]) && (ToRange >= CurrentSamples[i]))
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
  int *sortedArray = SortArray(CurrentSamples,NoOfSamples);
  
}

