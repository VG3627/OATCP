The operation required to do is done on the original array.(0*arr[0] + 1*arr[1]...).
The array is rotated which basically the value (n-1)*v[n-i] (1 <= i <= n - 2) is reduced from the initial value.
Also a new value is added . (total sum of array - arr[n - i]) ;
Time complexity - O(n).
Space complexity - O(n).
