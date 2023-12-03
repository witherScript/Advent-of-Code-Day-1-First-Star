# Advent of Code - Day 1

## Process

### Problem Statement
<hr>

Given a text file, find the first and last digit of every line, make a 2-digit number, and sum them all together. If there is only one digit in the line, make the resultant 2-digit string the digit repeated twice.

### Planning
I found this problem fairly straight forward, the major slog was reviewing C++ syntax. Here is a brief overview of my solution:

- <strong>Pseudocode</strong>
  - First Design Phase:
    ```
    iterate through a string array of lines from the file
      if the char in the current string is a digit:
        if it's the first digit found on this line:
        add it to the num string for this line
        set found to true
        if a number was already found:
          set finalDigit to the current character
      
    if the final digit is equal to the default value (and thus there is only one digit on the line):
      concatenate result onto itself
      
    ```

    Initially, I wanted to write two pure functions: one that converted the file into an array of lines, and another that iterated through a passed array of lines and calculates the sum. Obviously, this solution is inefficient. There is no need for the array in memory other than as an iterable, so I used a while loop and a built in fstream member function: getline.


    Message me with any questions, hopefully I get around to the next star!
