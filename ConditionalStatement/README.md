if and else are two of the most frequently used conditionals in C/C++, and they enable you to execute zero or one conditional statement among many such dependent conditional statements. We use them in the following ways:

if: This executes the body of bracketed code starting with  if  evaluates to true.<br>

if (condition) {
    statement1;
    ...
}<br>

if - else: This executes the body of bracketed code starting with  if evaluates to true, or it executes the body of code starting with  if  evaluates to false. Note that only one of the bracketed code sections will ever be executed.

if (condition) {
    statement1;
    ...
}
else {
    statement2;
    ...
}
if - else if - else: In this structure, dependent statements are chained together and the for each statement is only checked if all prior conditions in the chain evaluated to false. Once a  evaluates to true, the bracketed code associated with that statement is executed and the program then skips to the end of the chain of statements and continues executing. If each  in the chain evaluates to false, then the body of bracketed code in the else block at the end is executed.

if(first condition) {
    ...
}
else if(second condition) {
    ...
}
.
.
.
else if((n-1)'th condition) {
    ....
}
else {
    ...
}
<br>
<b>Given a positive integer denoting , do the following:</b><br>

If >= n >= 9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If n > 9, print Greater than 9.

<b>Input Format</b><br>
A single integer denoting <i>n</i>.

<b>Constraints</b><br>
1 >= <i>n</i> >= 10^9

<b>Output Format:</b>
If 1 >= <i>n</i> >= 9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

<b>Sample Input 0</b><br>
5

<b>Sample Output 0:</b><br>
five

<b>Explanation 0</b><br>
five is the English word for the number .

<b>Sample Input 1</b><br>
8

<b>Sample Output 1:</b><br>
eight<br>

<b>Explanation 1</b><br>
eight is the English word for the number .<br>

<b>Sample Input 2:</b><br>
44

<b>Sample Output 2:</b><br>
Greater than 9<br>

<b>Explanation 2<b><br>
n is greater than , so we print Greater than 9.
