At first array , position,i,n,and value are initialized as integer variable.
Then the Base Components of array are read from the user.
Then the Index for Insertion and the value to be inserted at that index is read from the user using scanf() function.
Then a for loop is initalized with the condition i=n-1, i>=position-1,i--
First i= n-1 sets the value of i less than the number of array elements input from the user.
If the value of i is greater than or equal to value of position-1 then the for loop is terminated.
Array element i+1 is made equal to array element i.It increases all the array element's index by 1 every time the loop runs.
Then array element position-1 is made equal to the insertion value input from the user.Since the index of array is shifted by one from above task. This one inserts the value input from user into the correct index.
Position -1 means if you want to insert 2 into the array [1,3,4,5] then you will give the position 2 to the program. But Since Array Index Starts from 0 ,the index has to be modified so as the compiler understands where you want to insert the element.
So The Value of Position is decreased by 1 to make the program accurate.