myDict = {
    "Pankha" : "Fan",
    "Vastu" :  "Item",
    "Dabba" : "Box"
}
print("Options are : ", myDict.keys())
a = input("Enter the Hindi Word : \n")
# When key is not in the dictionary it shows nown
print("The Tanslation of the word is : ", myDict.get(a))