# Create a dictionary
my_dict = {'a': 1, 'b': 2, 'c': 3}

# Accessing elements
print("Accessing elements:")
print("Value of 'a':", my_dict['a'])

# Adding or updating elements
print("\nAdding or updating elements:")
my_dict['d'] = 4  # Adding a new key-value pair
print("After adding 'd':", my_dict)
my_dict['b'] = 20  # Updating the value of an existing key
print("After updating 'b':", my_dict)

# Removing elements
print("\nRemoving elements:")
del my_dict['c']  # Removing a key-value pair
print("After removing 'c':", my_dict)

# Iterating over items
print("\nIterating over items:")
for key, value in my_dict.items():
    print(key, "->", value)

# Checking membership
print("\nChecking membership:")
print("'b' in my_dict:", 'b' in my_dict)
print("'z' not in my_dict:", 'z' not in my_dict)

# Getting keys and values
print("\nGetting keys and values:")
print("Keys:", my_dict.keys())
print("Values:", my_dict.values())

# Length of dictionary
print("\nLength of dictionary:")
print("Length:", len(my_dict))

# Clearing dictionary
print("\nClearing dictionary:")
my_dict.clear()
print("After clearing:", my_dict)
