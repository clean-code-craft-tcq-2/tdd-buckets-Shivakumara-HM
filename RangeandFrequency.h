int CompareInputs (const void * firstInput, const void * secondInput);
int* SortArray(int *CurrentSamples, int NoOfSamples);
int SamplesRangeCount(int* countOfReadings);
void PrintonConsole(char * InputData);
void SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance);
extern int ReadNoOfSamples(int *CurrentSamples, int NoOfSamples);
