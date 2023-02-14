# UIU CGPA Calculator
This program calculates the Cumulative Grade Point Average (CGPA) of a student in United International University (UIU), based on the grades obtained in different subjects and their corresponding credit values. The CGPA is calculated using the standard 4.0 scale, with letter grades ranging from A to F.

# How to use
Run the program using a C compiler.
Enter the number of subjects you took and the total credits you earned.
For each subject, enter the grade you obtained and the credit value of that subject.
The program will calculate and display your CGPA.

# Code explanation
The program uses a for loop to iterate over each subject entered by the user. For each subject, it asks the user to enter the grade obtained and the credit value of that subject. It then calculates the grade point value (GP) based on the standard 4.0 scale, and adds it to the sum of all GP values. Finally, it calculates the CGPA by dividing the sum of GP values by the total credits earned.

# The program uses the following formula to calculate GP:
GP = Credit Value * Grade Point Value

# The program uses the following standard 4.0 scale to calculate GP:
A: 4.0
A-: 3.67
B+: 3.33
B: 3.0
B-: 2.67
C+: 2.33
C: 2.0
C-: 1.67
D+: 1.33
D: 1.0
F: 0.0

If the user enters a grade that is not within the range of 0 to 100, the program displays an error message and asks the user to enter a valid number.

Finally, the program displays the calculated CGPA, rounded to two decimal places.
