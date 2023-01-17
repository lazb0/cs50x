# My solutions from [CS50x 2023](https://cs50.harvard.edu/x/2023/) course

## Week 0 - Scratch
### Problem Set 0
Just create scratch code with following specifications:
- Your project must use at least two sprites, at least one of which must not be a cat.
- Your project must have at least three scripts total (i.e., not necessarily three per sprite).
- Your project must use at least one conditional, at least one loop, and at least one variable.
- Your project must use at least one custom block that you have made yourself (via Make a Block), which must take at least one input.
- Your project should be more complex than most of those demonstrated in lecture (many of which, though instructive, were quite short).

I have decided to make copy of cookie clicker. The Banana Clicker the scratch game where you click the big banana to get more bananas to spent. With the bananas you can buy monkeys, that produce you more bananas. I made it so it meets the specification, though it could be more complex.


## Week 1 - C
### Lab 1
So, we started with C. The first program I wrote was to count how many years will it take to reach specific population of llamas by this formula:
- We get starting and ending population size from user
- We have population of `n` llamas. Then each year `n / 3` are born and `n / 4` pass away.
- The minimum user input needs to be 9 and the end population must be bigger than the starting population

I just use `while` loop that runs until current population is equals or bigger than end population and after each iteration adds 1 to years. After the code finishes it will just print out how many years were counted.

### Problem Set 1
#### 1. Hello
It's easy. Just ask user for his name and then print out `Hello, name`. I just used `cs50.h` library to get string then run `printf("hello, %s\n", name)` and that's all.

#### 2. Mario (More)
We want to print in console the same pyramid like in Mario at level 1-1.

![image](https://user-images.githubusercontent.com/62141573/212833852-acd4725e-99e3-418d-93cc-da2063ccc532.png)
- We will prompt user for the height of the tower that must be between 1 and 8
- After heigh is specified the program will print out the pyramid with specific height

Example:
```
./mario-more
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```


#### 3. Credit


## Week 2 - Arrays
### Lab 2
### Problem Set 2
