# Create a tuple
my_tuple = (1, 2, 3, 4, 5)

# Accessing elements
print("Accessing elements:")
print("First element:", my_tuple[0])
print("Last element:", my_tuple[-1])

# Slicing
print("\nSlicing:")
print("Slice from index 1 to 3:", my_tuple[1:4])
print("Every second element:", my_tuple[::2])

# Concatenation
print("\nConcatenation:")
other_tuple = (6, 7, 8)
concatenated_tuple = my_tuple + other_tuple
print("Concatenated tuple:", concatenated_tuple)

# Repetition
print("\nRepetition:")
repeated_tuple = my_tuple * 2
print("Repeated tuple:", repeated_tuple)

# Length of tuple
print("\nLength of tuple:")
print("Length:", len(my_tuple))

# Membership test
print("\nMembership test:")
print("Is 3 in the tuple?", 3 in my_tuple)
print("Is 10 not in the tuple?", 10 not in my_tuple)

# Tuple unpacking
print("\nTuple unpacking:")
a, b, c, d, e = my_tuple
print("Unpacked variables:", a, b, c, d, e)
