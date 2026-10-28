
# Lab 11: Nested if Statements in C

## Program 32: Find the Largest of Three Numbers

### Question
Write a C program to find the largest of three numbers using nested if statements.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Initialize three numbers"]
    B --> C{"Is A greater than B?"}
    C -->|Yes| D{"Is A greater than C?"}
    D -->|Yes| E["Display A is largest"]
    D -->|No| F["Display C is largest"]
    C -->|No| G{"Is B greater than C?"}
    G -->|Yes| H["Display B is largest"]
    G -->|No| I["Display C is largest"]
    E --> J([End])
    F --> J
    H --> J
    I --> J
```

### Program
**File:** 32_largest_nested_if.c

See [`32_largest_nested_if.c`](./32_largest_nested_if.c).

### Input
Predefined values: A = 10, B = 20, C = 15.

### Output
```text
B is largest
```

### Summary
This program uses nested if statements to find the largest of three numbers.

---

## Program 33: Find the Smallest of Three Numbers

### Question
Write a C program to find the smallest of three numbers using nested if statements.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Initialize three numbers"]
    B --> C{"Is A less than B?"}
    C -->|Yes| D{"Is A less than C?"}
    D -->|Yes| E["Display A is smallest"]
    D -->|No| F["Display C is smallest"]
    C -->|No| G{"Is B less than C?"}
    G -->|Yes| H["Display B is smallest"]
    G -->|No| I["Display C is smallest"]
    E --> J([End])
    F --> J
    H --> J
    I --> J
```

### Program
**File:** 33_smallest_nested_if.c

See [`33_smallest_nested_if.c`](./33_smallest_nested_if.c).

### Input
Predefined values: A = 10, B = 20, C = 5.

### Output
```text
C is smallest
```

### Summary
This program uses nested if statements to find the smallest of three numbers.

---

## Program 34: Determine a Student's Grade

### Question
Write a C program to determine a student's grade based on marks using nested if statements.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Initialize student marks"]
    B --> C{"Are marks at least 80?"}
    C -->|Yes| D{"Are marks at least 90?"}
    D -->|Yes| E["Display Grade A+"]
    D -->|No| F["Display Grade A"]
    C -->|No| G{"Are marks at least 70?"}
    G -->|Yes| H["Display Grade B"]
    G -->|No| I{"Are marks at least 60?"}
    I -->|Yes| J["Display Grade C"]
    I -->|No| K{"Are marks at least 40?"}
    K -->|Yes| L["Display Grade D"]
    K -->|No| M["Display Fail"]
    E --> N([End])
    F --> N
    H --> N
    J --> N
    L --> N
    M --> N
```

### Program
**File:** 34_student_grade_nested_if.c

See [`34_student_grade_nested_if.c`](./34_student_grade_nested_if.c).

### Input
Predefined marks: 85.

### Output
```text
Grade A
```

### Summary
This program uses nested if statements to determine a student's grade based on marks.

---

## Conclusion

In this lab, we practiced nested if statements to find the largest and smallest of three numbers and determine a student's grade.
