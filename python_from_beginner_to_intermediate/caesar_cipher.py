print('Convert string to Caesar Cipher\n')
string = input('Enter string to convert: ')
cipher = []
uppercase = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
lowercase = 'abcdefghijklmnopqrstuvwxyz'

for letter in string:
    if letter in uppercase:
        index = uppercase.index(letter)
        cipher_index = (index + 4) % 26
        cipher_letter = uppercase[cipher_index]
        cipher.append(cipher_letter)
    elif letter in lowercase:
        index = lowercase.index(letter)
        cipher_index = (index + 4) % 26
        cipher_letter = lowercase[cipher_index]
        cipher.append(cipher_letter)
    elif letter == ' ':
        cipher.append(' ')
cipher_string = ''.join(cipher)
print('Encrypted cipher:\n')
print(cipher_string)
print('Press enter to continue')
