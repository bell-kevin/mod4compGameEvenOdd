# mod4compGameEvenOdd

This exercise demonstrates your competency in the skills learned in this module. You must complete this exercise on your own, without any help from an instructor or another student. If you get stuck, go back through the relevant sections in the book, the quizzes, and the assignments for this module -- everything you need to do in this exercise has been covered in this and previous modules.

These are skills you practiced in this and previous modules and will now demonstrate:

Writing and using structures

Writing and using classes

Writing and using functions

Passing parameters to functions

Returning values from functions

Using loops

Reading input and writing output
 

Module 4 Competency Exercise: Game of Even-Odd

In this project, you will create a game for the user, using a structure, a class, and a separate function. In this game, the user will predict if the total of rolling 2 dice will be an even number or an odd number. If they predict correctly, add a point to the number of wins; if incorrectly, add a point to the number of losses.

Use a structure for the Player. A player has a first name, a last name, a number for wins, and a number for losses. In the project, ask the user for the first name and last name to store in this structure.

Use a class for the Dice. This class needs a function to roll the dice -- it will create 2 random numbers, one for each die, with values from 1 to 6, add them together, and return that total. Inside this function to roll the dice, display that total on the screen.

Use a function (create a prototype before the main function, declare this function below) that determines if the player's prediction was correct or not. Pass the dice total and the user's prediction to this function, and return "win" or "lose".

In the main function, create the Player with the user's input for the first and last name. In a loop, ask the player for their prediction of "even" or "odd". Roll the dice and use the function to determine if the player predicted correctly or not. If they did, add 1 to the number of wins; if not, add a 1 to the number of losses. 

Ask the Player if they want to play again. If they do, play again. If they do not, display the number of wins and losses, and say thanks for playing.

You may put the structure, class, and function in the same file with the main function.

Here is an example of an execution of this program:

![M4 Competency good](https://github.com/bell-kevin/mod4compGameEvenOdd/blob/main/mod4compGameEvenOdd/mod4.PNG)

Run the project and test the 4 possible results -- predict even and dice total is even, predict even and dice total is odd, predict odd and dice total is odd, predict odd and dice total is even. You will see all 4 of those results in the screenshot above. Take screenshots of your program running to show those 4 results (it may take more than 4 rolls, that's ok). Also get a screenshot of the messages when the player chooses to quit.

 

NOTE: Remember the requirements for a header and a pause at the end of the program, discussed in the reading "Console Applications". These are required in every console application project.

Submission: Submit a single zipped folder containing all of the specified screenshots AND the root folder for the project.

== We're Using GitHub Under Protest ==

This project is currently hosted on GitHub.  This is not ideal; GitHub is a
proprietary, trade-secret system that is not Free and Open Souce Software
(FOSS).  We are deeply concerned about using a proprietary system like GitHub
to develop our FOSS project. I have a [website](https://bellKevin.me) where the
project contributors are actively discussing how we can move away from GitHub
in the long term.  We urge you to read about the [Give up GitHub](https://GiveUpGitHub.org) campaign 
from [the Software Freedom Conservancy](https://sfconservancy.org) to understand some of the reasons why GitHub is not 
a good place to host FOSS projects.

If you are a contributor who personally has already quit using GitHub, please
email me at **bellKevin@pm.me** for how to send us contributions without
using GitHub directly.

Any use of this project's code by GitHub Copilot, past or present, is done
without our permission.  We do not consent to GitHub's use of this project's
code in Copilot.

![Logo of the GiveUpGitHub campaign](https://sfconservancy.org/img/GiveUpGitHub.png)
