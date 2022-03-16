# Test Driven Ranges

The charging current varies during the process of charging.
We need to capture the range of current measurements -
what range of currents are most often encountered while charging.

> **DO NOT** jump into implementation! Read the example and the starting task below.

## Example

### Input

A set of periodic current samples from a charging session,
as an array of integers. For example:
`3, 3, 5, 4, 10, 11, 12`

### Functionality

The continuous ranges in there are: `3,4,5` and `10,11,12`.

The task is to detect the ranges and
output the number of readings in each range.

In this example,

- the `3-5` range has `4` readings
- the `10-12` range has `3` readings.

### Output

The expected output would be in comma-separated (csv format):

```
Range, Readings
3-5, 4
10-12, 3
```

## Tasks

Establish quality parameters: 

- What is the maximum complexity (CCN) per function? 4 CCN and create corresponding yml in the `.github/workflows` folder
- How many lines of duplicate code will you tolerate? 5 the number of lines and create corresponding yml in the `.github/workflows` folder
- Ensure 100% line and branch coverage at every step. Include the coverage yml in the workflows.

Adapt/adopt/extend the `yml` files from one of your previous workflow folders.

Start Test-driven approach

1. Write the smallest possible failing test: give input `4,5`. assert output to be `4-5, 2`.
1. Write the minimum amount of code that'll make it pass.
1. Refactor any assumptions, continue to pass this test. Do not add any code without a corresponding test.

## Test Specification
Input:

    Input can be an integer array with 'n' no of samples and number of samples can vary for each session.
    Input should be considered as valid only, if the sample value is greater than 0.
    The samples in an array can be consecutive or non-consecutive.
    Input sample is considered as invalid, if it is an Empty array or contains Negative elements.

Action:

    Check whether the input is valid or not.
    Sort the received sample in ascending.
    Fetch the sample ranges.
    Find the min and max value in the range.
    Count the number of values in a range.
    Print the min and max range and the number of samples in the range in console.

Ouput:

    Valid Input: print the ranges and its occurences in csv format.
    Invalid Input: Print as not a valid set of sample to process

