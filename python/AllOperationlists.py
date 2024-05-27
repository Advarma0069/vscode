# Create a list
my_list = [1, 2, 3, 4, 5]

# 1. Accessing elements
print("Accessing elements:")
print("First element:", my_list[0])
print("Last element:", my_list[-1])
print("Slicing:", my_list[1:4])

# 2. Modifying elements
print("\nModifying elements:")
my_list[0] = 10
print("Updated list:", my_list)

# 3. Appending elements
print("\nAppending elements:")
my_list.append(6)
print("After appending 6:", my_list)

# 4. Extending list with another list
print("\nExtending list with another list:")
my_list.extend([7, 8, 9])
print("After extending:", my_list)

# 5. Inserting elements at a specific index
print("\nInserting elements:")
my_list.insert(2, 11)
print("After inserting 11 at index 2:", my_list)

# 6. Removing elements
print("\nRemoving elements:")
my_list.remove(11)
print("After removing 11:", my_list)
popped_element = my_list.pop()
print("Popped element:", popped_element)
print("After popping:", my_list)

# 7. Finding index of an element
print("\nFinding index of an element:")
index = my_list.index(4)
print("Index of 4:", index)

# 8. Counting occurrences of an element
print("\nCounting occurrences of an element:")
count = my_list.count(2)
print("Number of occurrences of 2:", count)

# 9. Sorting the list
print("\nSorting the list:")
my_list.sort()
print("Sorted list:", my_list)

# 10. Reversing the list
print("\nReversing the list:")
my_list.reverse()
print("Reversed list:", my_list)
