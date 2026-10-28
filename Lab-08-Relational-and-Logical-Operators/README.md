
# Lab 08: Relational and Logical Operators

This lab demonstrates relational operators, logical operators, and voting eligibility using C.

---

## 23. Demonstrate Relational Operators

### Question
Write a C program to demonstrate the use of relational operators.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 10 and b = 5"]
    B --> C["Check greater than"]
    C --> D["Check less than"]
    D --> E["Check equal to"]
    E --> F["Check not equal to"]
    F --> G["Check greater than or equal to"]
    G --> H["Check less than or equal to"]
    H --> I["Display all results"]
    I --> J([End])
```

### Program

**File:** `23_relational_operators.c`

See [`23_relational_operators.c`](./23_relational_operators.c).

### Input
No user input is required. The values are predefined as a = 10 and b = 5.

### Output

```text
a > b = 1
a < b = 0
a == b = 0
a != b = 1
a >= b = 1
a <= b = 0
```

### Summary
This program demonstrates six relational operators in C.

---

## 24. Demonstrate Logical Operators

### Question
Write a C program to demonstrate logical AND, OR, and NOT operators.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 10 and b = 5"]
    B --> C["Evaluate AND condition"]
    C --> D["Evaluate OR condition"]
    D --> E["Evaluate NOT condition"]
    E --> F["Display all results"]
    F --> G([End])
```

### Program

**File:** `24_logical_operators.c`

See [`24_logical_operators.c`](./24_logical_operators.c).

### Input
No user input is required. The values are predefined as a = 10 and b = 5.

### Output

```text
AND = 1
OR = 1
NOT = 0
```

### Summary
This program demonstrates the logical AND (&&), OR (||), and NOT (!) operators in C.

---

## 25. Check Voting Eligibility

### Question
Write a C program to check whether a person is eligible to vote.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set age to 20"]
    B --> C{"Is age greater than or equal to 18?"}
    C -->|Yes| D["Display Eligible to vote"]
    C -->|No| E["Display Not eligible to vote"]
    D --> F([End])
    E --> F
```

### Program

**File:** `25_voting_eligibility.c`

See [`25_voting_eligibility.c`](./25_voting_eligibility.c).

### Input
No user input is required. The age is predefined as 20.

### Output

```text
Eligible to vote
```

### Summary
This program uses an if-else statement and a relational operator to check voting eligibility.

---

## Lab 08 Conclusion

In this lab, we learned how to use relational operators, logical operators, and conditional statements in C programming.
