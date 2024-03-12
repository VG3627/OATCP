In the algorithm used , the function 'f' calculates the number of ways to obtain the sum n by considering all possible outcomes of rolling a dice (from 1 to 6). 

It recursively calls itself for the remaining sum after subtracting each possible outcome from n and sums up the results.

A dp array is used to store the results of the recursive calls and using the results if recursive function with same values is called again.

Modulo by 1e9 + 7 is done to avoid integer overflow. 

Time complexity for single test case : O(n)

Space complexity for single test case : O(n)
