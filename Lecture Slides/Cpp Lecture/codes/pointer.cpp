int *countPtr, count;   // declaring a countPtr with *

&*aPtr = aPtr;
*&aPtr = aPtr;
&*aPtr = *&aPtr;   // these are equivalent to each other

int &count; // count is a reference to an int