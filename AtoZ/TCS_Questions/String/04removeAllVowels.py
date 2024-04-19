str_input = str(input("Enter a string: "))
temp_str = str_input
temp = len(str_input)
# for i in range(0, temp ):
#     if (str_input[i] == 'a' or str_input[i] == 'e' or str_input[i] == 'i' or str_input[i] == 'o' or str_input[i] == 'u' or str_input[i] == 'A' or str_input[i] == 'E' or str_input[i] == 'I' or str_input[i] == 'O' or str_input[i] == 'U'):
#         temp_str = temp_str[:i] + temp_str[i+1:]
# print(temp_str)

for i in str_input:
    if i in 'aeiouAEIOU':
        temp_str = temp_str.replace(i, '')
print(temp_str)