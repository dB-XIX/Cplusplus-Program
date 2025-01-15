# C++ Corner Grocer Program

## Overview
The objective of the **Corner Grocer Program** was to create a C++ application capable of reading a file, recording the original occurrences of words, counting the occurrences of each word, and returning a list of each word along with its count. The use case for this program is to assist a grocery store owner in optimizing the store layout by analyzing the frequency of item purchases, thereby streamlining the customer shopping experience.

Additionally, a menu was incorporated to allow grocery store employees to:
- Access the full list of items and their purchase counts.
- Retrieve the count for any specific item by entering its name.
- Display a visual histogram representing each item's purchase frequency.

---

## Key Accomplishments

### Clean and Orderly Code
The program is well-structured, making it easy to read, maintain, and adapt for future enhancements.

### Input Handling
I implemented case-insensitivity for user input, ensuring variations in capitalization do not impact the program’s functionality.

### Ordered Output
The program orders the list of items by purchase frequency, displaying items from the most to the least purchased.

---

## Areas for Enhancement
- **Singular and Plural Mapping**:
  The program could be improved by accounting for singular and plural versions of item names, mapping them to the same product and count where appropriate. For example, "onion" and "onions" could be treated as the same item unless contextually distinct (e.g., a single onion vs. a 3 lb. bag of onions).

- **Output Formatting**:
  Using a dictionary in Python posed formatting challenges due to the automatic newline character after keys when printing to the console. I resolved this issue by utilizing a list of tuples and removing the newline character from keys with a for-loop. While functional, this approach could be further optimized to bypass dictionary-related constraints.

---

## Challenges and Solutions
- **Formatting Dictionary Output**:
  I adapted to Python’s automatic newline handling by switching to a list of tuples and trimming newline characters during iteration. This provided the needed formatting for console output.

- **Multilingual Implementation**:
  The project required working with both Python and C++, highlighting the need to manage communication between multiple languages. This was a significant learning opportunity and a key takeaway for future projects.

---

## Takeaways
The **Corner Grocer Program** provided valuable experience in creating maintainable, readable, and adaptable code. Key strategies included:
- Encapsulating items where possible.
- Utilizing functions and methods to break down tasks.
- Employing a `switch/case` statement for the menu to simplify control flow.
- Adding in-line comments to enhance clarity.
- Simplifying user input error checking.
- Keeping the `main()` function concise for better readability and maintainability.

---

## Future Applications
The techniques and skills developed in this project—including clean code practices, multilingual implementation, and robust input handling—are directly applicable to future software development tasks. This experience emphasized the importance of adaptability, problem-solving, and a structured approach to coding challenges.

