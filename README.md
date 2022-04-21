# Cplusplus-Program

Corner Grocer Program

  The objective was to create a program to read a file, record original occurences of words, count the occurences of each of those words, and return a list of each word and its count. The idea is the grocery store owner would like to adjust the layout of the store based on item purchase frequency, streamlining the customer's shopping experience. A menu was added to give the grocery store employee user access to the full list, any single list item they enter, and a visual histogram of each item and its count. 
  
  Things I did particularly well: 
- the code is clean and orderly
- accounting for variations in capitalization in user input
- ordering the list from greatest to least number of item purchases

Enhancement could be made to account for singular and plural user input for item names, mapping them to the same product and count as long as they are not actually separate items, i.e. a single onion vs. buying a 3 lb. bag of onions (these would likely be considered separate). This would make the experience more user-friendly.
  Using a dictionary in the Python code caused output formatting challenges because of an automatic newline character after the key when printing to the console. I overcame this by using a list of tuples and cutting the newline character from each key string with a for-loop. This solution seems like it could have been better, possibly bypassing the use of a dictionary, but due to time constraints I went with this code as it was functioning properly. 
  The primary takeaway from this project is the implementation of multiple languages, which will be usefull in future projects.
  I made the program maintainable, readable, and adaptable by using functions, methods, a switch/case statement for the menu, simplified error checking of user input, added in-line comments, and keeping main() as short as possible. Items are encapsulated where possible.
