# Integer array
int_array = [1, 2, 3, 4, 5]

# Initialize an empty string array
string_array = []

# Loop through each integer element in the integer array
for num in int_array:
    # Convert the integer element to a string
    str_num = str(num)
    # Append the string element to the string array
    string_array.append(str_num)

# Join all string elements into a single string
result = ''.join(string_array)

# Add the concatenated string to the string array
string_array.append(result)

print(string_array)