print("welcome to the tip calculator")
total_bill = float(input("What is the total bill "))
percentage = float(input("how much tip you want to give? 10%, 12%, or 15%? "))
split = int(input("How many people to split the bill? "))
tip_per_person = (total_bill * (percentage / 100)) / split
share_per_person = total_bill / split
total_per_person = share_per_person + tip_per_person
print("Each person should pay: ₹" + str(round(total_per_person, 2)))