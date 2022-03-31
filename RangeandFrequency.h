int ReadNoOfSamples(int *Readings, int NoOfSamples);
int* ConvertA2D(int *Readings, int NoOfSamples);
int* SortArray(int *CurrentSamples, int NoOfSamples);
int CompareInputs (const void * firstInput, const void * secondInput);
int SamplesRangeCount(int* SortedCurrentSamples, int NoOfSamples);
void PrintonConsole(char * InputData);
void SendDataToPrint(int FromRange , int ToRange ,int TotalOccurance);

