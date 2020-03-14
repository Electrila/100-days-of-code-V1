print('Determine if \'cat\' and \'dog\' appear the same number of times in a given string:\n')
string = input('Enter string to search: ')
cat_count = 0
dog_count = 0
for word in string:
    if word == 'cat':
        cat_count += 1
    elif word == 'dog':
        dog_count += 1
print('Cat and dog count equal?:\n')
print(cat_count == dog_count)
print('Press enter to continue')
