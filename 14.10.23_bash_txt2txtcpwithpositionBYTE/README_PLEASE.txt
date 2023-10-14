This code copies a user specified section from a chosable text and pastes it into another one of choise.
Here is the workflow of the code.

1) byte_spec_copy.sh - Main code, ask user for input and acts acording to the task.
2) jesko_best - AI generated text on why the Keonengseg Jesko is a great car (target text).
3) outpasted - Target location where to paste (contains 1-200).
4) outpasted_reserve_for_testing - A reserve for when the "outpasted" file gets damaged this is the replacement.
5) clone_wars - BASH SCRIPT THAT AUTOMATICALY REPLACES "outpasted" WITH "outpasted_reserve_for_testing" TO SPEED UP MY TESTS (also contains 1-200).
