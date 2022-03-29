0x1E. C - Search Algorithms
=

Space Complexity of Algorithms
=

Whenever a solution to a problem is written some memory is required to complete. For any algorithm memory may be used for the following:

1.  Variables (This include the constant values, temporary values)

2.  Program Instruction

3.  Execution

<h2>Space complexity</h2>

Space complexity is the amount of memory used by the algorithm (including the input values to the algorithm) to executeand produce the result.

Sometime<h3> Auxiliary Space</h3> is confused with Space Complexity. But Auxiliary Space is the extra space or the temporary space used by the algorithm during it's execution.

<h3>Space Complexity = Auxiliary Space + Input space</h3>

<h2>Calculating the Space Complexity</h2>

For calculating the space complexity, we need to know the value of memory used by different type of datatype variables, which generally varies for different operating systems, but the method for calculating the space complexity remains the same.

|------------------------------------------------------------------------|
|             Type                                      |      Size      |
|-------------------------------------------------------+----------------|
|bool, char, unsigned char, signed char, __int8	        |      1 byte    |
|-------------------------------------------------------+----------------|
|__int16, short, unsigned short, wchar_t, __wchar_t	|      2 bytes   |
|-------------------------------------------------------+----------------|
|float, __int32, int, unsigned int, long, unsigned long	|      4 bytes   |
|-------------------------------------------------------+----------------|
|double, __int64, long double, long long	        |      8 bytes   |
|------------------------------------------------------------------------|

For Example

         {
                int z = a + b + c;
                return(z);
         }

In the above expression, variables a, b, c and z are all integer types, hence they will take up 4 bytes each, so total memory requirement will be (4(4) + 4) = 20 bytes, this additional 4 bytes is for return value. And because this space requirement is fixed for the above example, hence it is called Constant Space Complexity.

Searching Algorithms
=
Not even a single day pass, when we do not have to search for something in our day to day life, car keys, books, pen, mobile charger and what not. Same is the life of a computer, there is so much data stored in it, that whenever a user asks for some data, computer has to search it's memory to look for the data and make it available to the user. And the computer has it's own techniques to search through it's memory fast,

Well, to search an element in a given array, there are two popular algorithms available:

*  Linear Search

*  Binary Search

<h2>Linear Search</h2>

Linear search is a very basic and simple search algorithm. In Linear search, we search an element or value in a given array by traversing the array from the starting, till the desired element or value is found.

Features of Linear Search Algorithm

* It is used for unsorted and unordered small list of elements.

* It has a time complexity of O(n), which means the time is linearly dependent on the number of elements,which is not bad, but not that good too.

* It has a very simple implementation.

<h2>Binary Search</h2>

Binary Search is used with sorted array or list. In binary search, we follow the following steps:

* We start by comparing the element to be searched with the element in the middle of the list/array.

* If we get a match, we return the index of the middle element.

* If we do not get a match, we check whether the element to be searched is less or greater than in value than the middle element.

Features of Binary Search

* It is great to search through large sorted arrays.

* It has a time complexity of O(log n) which is a very good time complexity. We will discuss this in details in the Binary Search tutorial.

* It has a simple implementation.