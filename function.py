def print_awesome():
    print("You're awesome!")

def print_not_awesome():
    print("You're not awesome!")

name = input("What is your name? ")

if name == "Tim":
    print_awesome()
elif name == "Sarah":
    print_awesome()
else:
    print_not_awesome()
