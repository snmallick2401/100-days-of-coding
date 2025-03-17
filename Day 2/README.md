# Tip Calculator - Day 2

Welcome to my **Tip Calculator** project – Day 2 of my 100 Days of Code challenge! This simple Python program calculates how much each person should pay when splitting a bill, including tip.

## Overview

This program performs the following steps:
- **Inputs:**  
  - The total bill amount.
  - The tip percentage (e.g., 10%, 12%, or 15%).
  - The number of people to split the bill.
- **Calculations:**  
  - It computes the tip amount per person.
  - It calculates each person's share of the original bill.
  - It sums these amounts to determine the total each person should pay.
- **Output:**  
  - The final amount is displayed with a rupee symbol (₹) and formatted to two decimal places.

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

## How to Run

1. **Requirements:**  
   Make sure you have Python 3 installed.

2. **Steps:**  
   - Clone or download this repository.
   - Open a terminal/command prompt in the project folder.
   - Run the program by typing:
     ```bash
     python tip_calculator.py
     ```
   - Follow the prompts to input the bill amount, tip percentage, and number of people.

## What I Learned

- How to read user input and convert it to numeric types.
- Basic arithmetic operations in Python.
- Formatting output to a fixed number of decimal places.
- Using the rupee symbol (₹) to display monetary values.

## Future Improvements

- Add error handling for invalid inputs.
- Create a graphical user interface (GUI) for a more interactive experience.
- Extend functionality (e.g., calculating split amounts with tax, discounts, etc.).

## License

This project is open source under the [MIT License](LICENSE).

## Contact

Feel free to reach out with any questions or suggestions!
