A for loop is a programming language statement which allows code to be repeatedly executed. <br>

The syntax for this is: <br>

for ( <expression_1> ; <expression_2> ; <expression_3> )<br>
    <statement><br>
    
expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.<br>
expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.<br>
expression_3 is generally used to update the flags/variables.<br>

A sample loop will be<br>
for(int i = 0; i < 10; i++) {<br>
    ...<br>
}<br>

<b>Input Format</b><br>
You will be given two positive integers,  and  (), separated by a newline.<br>

<b>Output Format</b><br>
For each integer  in the interval  :<br>

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
<b>Note: <b><br>

<b>Sample Input</b><br>
8<br>
11<br>

<b>Sample Output</b><br>

eight<br>
nine<br>
even<br>
odd<br>
