string = str(input())
invertedList = ['',]

length = range(len(string))

x = 0

def palindrome( string ):
    for x in length:
        L = 0 - (x + 1)
        pos = string[L]
        invertedList.append(pos)
    return invertedList


palindrome(string)

finalPalindrome = "".join(invertedList)
print(finalPalindrome)