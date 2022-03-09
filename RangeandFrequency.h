typedef struct 
{
  int min;
  int max;
  int count;
} currentrange;

currentrange getrange(int *Samples);
int getfrequency(int *Samples); 
