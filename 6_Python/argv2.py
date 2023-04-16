from sys import argv

for arg in argv[1:]: # slice of cli arguments, starting from the 2nd, since 1st is name of program
    print(arg)