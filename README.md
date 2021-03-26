# icplab8
Submission for ICP Lab 8 Spring Semester 2021

My solution to the linearization function involved recognizing the fact that C++ stores arrays using row major ordering.
So even multidimensional arrays are stored as contiguous spaces in memory, even if the array is filled up in a lower 
triangular manner.

#Linearizing the multidimensional array
Using this understanding, I drew a sample multidimensional array in the form of a matrix. This allowed me to observe that
after the first element of the first row is filled (using the lower triangular pattern), the number of contiguous blocks of memory
 skipped before the next space is filled with an element can be represented by the total number of columns in the array (since indexing 
 starts from 0). Getting to the correct position in the linear array then simply involves adding the current column index in the 
 multidimensional array.
  This birthed a sort of formula:
      I = row_index * number_of_columns + column_index

#Dimensionalising the linear arrays
I tried to work backward to try to find a reverse formula. This did not work quite well. So I decided to capitalize on the existing knowledge.
To do this, I first initialized a counter to -1 to serve as a check. Then I used a nested loop to iterate over the linear array, while incrementing the
counter if the multidimensional array was not equal to 0. When the counter is equal to the specified index, the values of the loop variables are returned as pairs.
I was not quite able to complete this aspect of the code.
