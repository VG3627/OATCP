The two arrays a and b are sorted.
we form a recursive function which works as follows :
When the condition abs(b[j] - a[i]) <= 1 is met, we count a pair and increment both i and j.
if the condition is not met we have two choices - one to increment i and other to increment j.
The base case is when we traveresed the whole a or b array.
The function is memoised to not not recalculate same subproblems.
Time complexity - O(n*m)
Space Complexity - O(n)
