Below is a sample README.md file for your Day 2 project:

---

# Day 2: Tip Calculator

This is a simple Python tip calculator project that I developed on Day 2 of my 100 Days of Code challenge. The script calculates how much each person should pay by splitting both the bill and the tip equally.

## Project Overview

The tip calculator asks the user for:
- The total bill amount.
- The tip percentage (e.g., 10%, 12%, or 15%).
- The number of people splitting the bill.

It then calculates:
- The tip per person.
- The share of the bill per person.
- The total amount each person should pay (bill share + tip).

The output is formatted to two decimal places and uses the rupee symbol (₹) instead of the dollar sign.

## Code

```python
print("welcome to the tip calculator")
total_bill = float(input("What is the total bill "))
percentage = float(input("how much tip you want to give? 10%, 12%, or 15%? "))
split = int(input("How many people to split the bill? "))
tip_per_person = (total_bill * (percentage / 100)) / split
share_per_person = total_bill / split
total_per_person = share_per_person + tip_per_person
print("Each person should pay: ₹" + str(round(total_per_person, 2)))
```

## What I Learned

- **Data Type Conversion:**  
  I learned that input from the user is received as a string and needs to be converted to a number (using `float` and `int`) to perform arithmetic operations.

- **Basic Arithmetic Operations:**  
  This project reinforced how to perform mathematical calculations in Python, such as calculating percentages and dividing values.

- **String Concatenation and Formatting:**  
  I practiced converting numbers to strings and concatenating them with other text, as well as rounding numbers to a fixed number of decimal places.

- **User Interaction:**  
  The project introduced me to creating interactive command-line applications, which is an essential skill for building user-friendly programs.

- **Problem Solving:**  
  Breaking down the problem into smaller steps (calculating tip, splitting the bill, summing the parts) helped me improve my approach to solving programming challenges.

## Future Improvements

- **Input Validation:**  
  Adding checks to ensure that the inputs are valid numbers will make the program more robust.

- **Enhanced Output Formatting:**  
  I plan to explore more advanced formatting options to improve the user interface, perhaps by using formatted strings or libraries that support currency formatting.

## Conclusion

This Day 2 project was a great introduction to combining user input, data conversion, and arithmetic operations in Python. It helped solidify fundamental programming concepts that I will continue to build on in the upcoming days of my coding challenge.

---

Feel free to adjust the README file to better reflect your personal experience and any additional insights you gained from this project.
