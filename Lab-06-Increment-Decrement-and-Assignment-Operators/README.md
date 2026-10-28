# Lab 06: Increment, Decrement and Assignment Operators

## 17. Increment and Decrement Operators

### Question
Write a C program to demonstrate the use of increment and decrement operators.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 5"]
    B --> C["Display a"]
    C --> D["Increment a by 1"]
    D --> E["Display a"]
    E --> F["Decrement a by 1"]
    F --> G["Display a"]
    G --> H([End])
```

### Program

**File:** `17_increment_decrement.c`

See [`17_increment_decrement.c`](./17_increment_decrement.c).

### Input
No user input is required. The initial value is 5.

### Output

```text
a = 5
After increment = 6
After decrement = 5
```

### Summary
This program demonstrates increment and decrement operators in C.

---

## 18. Compound Assignment Operators

### Question
Write a C program to demonstrate the use of compound assignment operators.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 10"]
    B --> C["Add 5 to a"]
    C --> D["Subtract 3 from a"]
    D --> E["Multiply a by 2"]
    E --> F["Divide a by 4"]
    F --> G["Find remainder after division by 3"]
    G --> H["Display results"]
    H --> I([End])
```

### Program

**File:** `18_compound_assignment.c`

See [`18_compound_assignment.c`](./18_compound_assignment.c).

### Input
No user input is required. The initial value is 10.

### Output

```text
Initial value = 10
After += 5: 15
After -= 3: 12
After *= 2: 24
After /= 4: 6
After %= 3: 0
```

### Summary
This program demonstrates the compound assignment operators +=, -=, *=, /=, and %=.

---

## 19. Swap Two Numbers Using a Third Variable

### Question
Write a C program to swap two numbers using a third variable.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 10 and b = 20"]
    B --> C["Store a in temp"]
    C --> D["Set a equal to b"]
    D --> E["Set b equal to temp"]
    E --> F["Display a and b"]
    F --> G([End])
```

### Program

**File:** `19_swap_two_numbers.c`

See [`19_swap_two_numbers.c`](./19_swap_two_numbers.c).

### Input
No user input is required. The initial values are a = 10 and b = 20.

### Output

```text
Before swapping:
a = 10
b = 20
After swapping:
a = 20
b = 10
```

### Summary
This program swaps two numbers using a temporary variable.

---

## Lab 06 Conclusion

In this lab, we learned about increment and decrement operators, compound assignment operators, and swapping two numbers using a temporary variable.
