# LM7 More Functions
Class: CS171 – Computer Science 1   
Last Modified: 10/23/2019  
Whitworth University, Instructor: Scott Griffith  
with heavy reference from Kent Jones, Pete Tucker, and other CS faculty

You will continue to be graded on __proper coding style__. The aspect that you should care about most is __good comments__ and __proper indentation__. Each program should have a proper comment header and each line of code should be referenced by a comment describing what it is doing.  

Additionally you should start to care about __code re-use__. You should be using as few variables as possible, and you should never have to use your copy/paste commands.

Functions should have __documentation__! Each function should have a set of comments that outline the purpose of the function, what the inputs are, their scope and what the return value is. 


### Grade Break Down
| Part | | Points |
|---|---|---|
| Part 1 | Printing Characters | 20 pts |    
| Part 2 | Palindrome Primes | 30 pts |
| | |Total: 50|

### Code Requirements
- Follow style guide
- Good and proper comments
- Read the problem requirement closely 
<br></br>  

-------
## Part 1: Printing Characters  

Your base program is going to ask the user for two characters and a number. Then every character between the first and second character will be displayed. Remember characters are encoded in ASCII. Each line will only contain the number of characters equal to the number entered. Each character will be separated with a space.  

You will implement at least one function, that function will have the prototype:
`void printChars(char ch1,char ch2,int numPerLine);`  

You are more than welcome to use more than one function if that helps your code.  

Example input: 7, K, 8  
Example output:  

    7 8 9 : ; < = >
    ? @ A B C D E F
    G H I J K


-----
## Part 2: Palindrome Primes  

Palindrome primes are prime numbers with digits that are also palindromes (same order forwards and backwards). Your code is going to calculate all of the palindrome primes between 0 and 10000. An example of a palindrome prime is 373, be aware that single digit primes are also palindromes!  

The output is going to be important as well. You are going to need to output the answers, __eight to a line, evenly spaced out__.  

In general you are going to be __re-using some functions__ that you have already written. You should absolutely re-use `primeCheck()` from LM6. You might also want to re-use some code from your digit addition from LM6, part3.  

I would strongly suggest __outlining__ this code first. Write your function headers and prototypes first, then start implementing them __one at a time__. Make sure to test your functions as you go.  

As a place to start: implement a reverse function, then compare output. If they are the same, it is a palindrome! There are other ways too, just giving you a heads up.  

Hint: I used 4 functions to solve this! If you do it in one, you are not doing it correctly, if you do it in 12, that is way too much!
