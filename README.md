# Control_statement
## Aim:
To understand and implement control flow statements in C++, including for, while, and do-while loops, and analyze their working with examples.

## Software Used
Language: C++
Code Editor: Visual Studio Code
## Theory:
### 1. `for` Loop
The for loop is an entry-controlled loop, ideal when the number of iterations is known in advance. It has three parts: initialization, condition, and update. All three are included in the loop definition.
```
// Example in C++
for (int i = 0; i < 5; i++) {
    cout << "Iteration " << i << endl;
}
```
Use case: Fixed number of iterations.

### 2. `while` Loop
The while loop is also entry-controlled, but the initialization is done outside the loop. The loop continues to execute as long as the condition is true.
```
// Example in C++
int i = 0;
while (i < 5) {
    cout << "Iteration " << i << endl;
    i++;
}
```
Use case: When the number of iterations is not known in advance and depends on a condition.

### 3. do-while Loop
The do-while loop is an exit-controlled loop. The loop body is executed at least once, even if the condition is false at the beginning.
```
// Example in C++
int i = 0;
do {
    cout << "Iteration " << i << endl;
    i++;
} while (i < 5);
```
Use case: When the loop must run at least once regardless of the condition.

### Comparison Table
| Loop Type |	Entry/Exit Controlled |	Minimum Iterations	| Condition Check |
| --------- | --------------------- | ------------------- | --------------- |
| for	| Entry-controlled	| 0	| Before loop body | 
| while	| Entry-controlled	| 0	| Before loop body |
| do-while |	Exit-controlled |	1 |	After loop body |

## Conclusion
Loops are essential part of programming and helps programmer to reduce the lines of code where there is patterns in part of loops also while and do while loop plays crucial role where iterations are not known so loops terminate after the condition is met.


## Algorithm: Password Checker using do-while Loop in C++
1. Start the program.
2. Initialize a string variable `pass` with the correct password (e.g., `"01232@"`).
3. Declare a string variable `input` to store user input.
4. Start a` do-while` loop:
  * Prompt the user to enter the password.
  * Read the user input into the input variable.
  * Check if `input == pass`:
    * If true: Display `"Access Granted"` and break the loop.
    * If false: Display `"Wrong Password, Try Again!"`.
5. Continue the loop while `input != pass`.
6. End the program.

## Algorithm: Print "SIT" 5 Times using `for` Loop in C++
1. Start the program.
2. Use a `for` loop with the following structure:
  * Initialize loop counter `i = 0`.
  * Set the loop condition `i < 5` to run the loop 5 times.
  * Increment `i` by 1 in each iteration.
3. Inside the loop body, print `"SIT"` followed by a newline.
4. Repeat the loop until `i` reaches 5.
5. Exit the loop and end the program.

## Algorithm: Print Even Numbers from 0 to 10 using for Loop (Increment Inside)
1. Start the program.
2. Use a for loop with the following:
  * Initialization: Set i = 0
  * Condition: Continue loop while i <= 10
  * Increment: Leave it blank in the loop header
3. Inside the loop body:
  * Print the current value of i.
  * Increment i by 2 using i = i + 2 to print only even numbers.
4. Repeat until i becomes greater than 10.
5. End the program.

## Algorithm: Reverse Last 5 Digits of PRN using `do-while` Loop in C++
1. Start the program.
2. Declare an integer variable `PRN`.
3. Prompt the user to enter the last 5 digits of their PRN and store it in `PRN`.
4. Print the message: `"Reversed PRN: "`
5. Start a `do-while` loop:
  * Extract the last digit of `PRN` using `PRN % 10` and store it in digit.
  * Print `digit`.
  * Remove the last digit from `PRN` using `PRN = PRN / 10`.
6. Continue the loop until `PRN != 0`.
7. End the program.



