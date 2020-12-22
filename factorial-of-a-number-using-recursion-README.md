Suppose the user entered 6.

Initially, multiply() is called from main() with 6 passed as an argument.

Then, 5 is passed to multiply() from the same function (recursive call). In each recursive call, the value of argument n is decreased by 1.

When the value of n is less than 1, there is no recursive call and the factorial is returned ultimately to the main() function.