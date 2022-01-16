def add(num_1, num_2):
    sum = num_1 + num_2
    return sum

def subtract(num_1, num_2):
    diff = num_1 - num_2
    return diff

def product(num_1, num_2):
    prod = num_1 * num_2
    return prod

def quotient(num_1, num_2):
    quot = num_1 / num_2
    return quot

n_1 = int(input("Enter a number: "))
n_2 = int(input("Enter another number: "))

su = add(n_1, n_2)
dif = subtract(n_1, n_2)
pro = product(n_1, n_2)
quo = quotient(n_1, n_2)

print(f"The sum of the two numbers is {su}.")
print(f"The difference of the two numbers is {dif}.")
print(f"The product of the two numbers is {pro}.")
print(f"The quotient of the two numbers is {quo}.")

