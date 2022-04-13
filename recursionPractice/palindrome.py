string = str(input())
invertedList = ['',]

length = range(len(string))

x = 0

def palindrome( string ):
    for x in length:
        L = 0 - (x + 1)         #access the negative index of the next position
        pos = string[L]         #store the next index into the position variable
        invertedList.append(pos)    #append that value onto the end of the 
    return invertedList


palindrome(string)

finalPalindrome = "".join(invertedList)   #convert an empty string and a list into a  single string
print(finalPalindrome)
