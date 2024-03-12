In the algorithm used ,the function 'f' iterates through the possible movements (down and right) from the current position (i, j). 

If the movement is valid (within the grid boundaries and not blocked by '*'), it recursively calls itself for the next position and adds the result to the answer.

A 2D dp array is used to store results of the functions calls to to use it again for same recursive calls.

Time complexity of single test case : O(n^2)

Space complexity of single test case : O(n^2)
