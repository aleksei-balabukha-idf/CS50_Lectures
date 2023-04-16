from sys import argv

if len(argv) == 2: # if we provide 1 additional argument
    print(f"hello, {argv[1]}")
else:
    print("hello, world")