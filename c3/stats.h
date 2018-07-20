/**
* @ this header file contains :
* print_Array function: This takes inputs from the user and prints the array element. This is passing two element 1. how many element user want to enter and 2. passing the pointer to the Array and the return type of this function is integer.
* Find_maximum : This function is also taking two aurguments and calculating  the maximum from the given i/p array by comapring each element.
* Find_minimum : This function is also taking two aurguments and calculating  the minimum from the given i/p array by comapring each element.
* Find_mean: This function reads through the array and sum it up and then calculates the mean based on the number of the element and value of the element entered by the User.
* sort_array: This function is passing the array element and number of the element. Then performs the shorting by comparing each element and gives the output of the shorted array in decending sequence
* find_median: This function is passing the array element and number of the element. Then based on the number of elements. It will calculate the median from the sorted array. If the number of the elements is odd then it will give the middle element value as a median and if the number of elements is even then it will give the averge of (n-1/2 th element and n/2 )/2 as a Median. 
* Print_statistics(): This function is only print the values from functions: Find_maximum,Find_minimum,Find_mean,find_median;

**/


int print_array(int* a,int n);
int Find_maximum( int *a,int n);
int Find_minimum( int *a,int n);
int Find_mean(int *a,int n); 
void sort_array(int *a,int n);
float find_median(int *a,int n);
void print_statistics(int *a,int n);
 
