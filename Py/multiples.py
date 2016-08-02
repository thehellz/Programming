number = input('Please enter a number: ')
sum = 0

for i in range(1,number+1):
    if (i % 3 == 0) or (i % 5 == 0):
        sum = sum + i

print 'The sum using only multiples of 3 and 5 is', sum
