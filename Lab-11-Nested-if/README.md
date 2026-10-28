
# Lab 11: Nested if Statements in C

## Program 32: Find the Largest of Three Numbers

### Question
Write a C program to find the largest of three numbers using nested if statements.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set a = 10, b = 20, c = 15"]
    B --> C{"a > b?"}
    C -->|Yes| D{"a > c?"}
    D -->|Yes| E["Print A is largest"]
    D -->|No| F["Print C is largest"]
    C -->|No| G{"b > c?"}
    G -->|Yes| H["Print B is largest"]
    G -->|No| I["Print C is largest"]
    E --> J([End])
    F --> J
    H --> J
    I --> J
```

### Program

**File:** 32_largest_nested_if.c

See [`32_largest_nested_if.c`](./32_largest_nested_if.c).

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 15;

    if (a > b)
    {
        if (a > c)
            printf("A is largest\n");
        else
            printf("C is largest\n");
    }
    else
    {
        if (b > c)
            printf("B is largest\n");
        else
            printf("C is largest\n");
    }

    return 0;
}
```

### Input
No user input is required. The values are predefined.

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
    A([Start]) --> B["Set a = 10, b = 20, c = 5"]
    B --> C{"a < b?"}
    C -->|Yes| D{"a < c?"}
    D -->|Yes| E["Print A is smallest"]
    D -->|No| F["Print C is smallest"]
    C -->|No| G{"b < c?"}
    G -->|Yes| H["Print B is smallest"]
    G -->|No| I["Print C is smallest"]
    E --> J([End])
    F --> J
    H --> J
    I --> J
```

### Program

**File:** 33_smallest_nested_if.c

See [`33_smallest_nested_if.c`](./33_smallest_nested_if.c).

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 5;

    if (a < b)
    {
        if (a < c)
            printf("A is smallest\n");
        else
            printf("C is smallest\n");
    }
    else
    {
        if (b < c)
            printf("B is smallest\n");
        else
            printf("C is smallest\n");
    }

    return 0;
}
```

### Input
No user input is required. The values are predefined.

### Output

```text
C is smallest
```

### Summary
This program uses nested if statements to find the smallest of three numbers.

---

## Program 34: Determine a Student's Grade Using Nested if

### Question
Write a C program to determine a student's grade based on marks using nested if statements.

### Flowchart

```mermaid
flowchart TD
    A([Start]) --> B["Set marks = 85"]
    B --> C{"marks >= 80?"}
    C -->|Yes| D{"marks >= 90?"}
    D -->|Yes| E["Print Grade A+"]
    D -->|No| F["Print Grade A"]
    C -->|No| G{"marks >= 70?"}
    G -->|Yes| H["Print Grade B"]
    G -->|No| I{"marks >= 60?"}
    I -->|Yes| J["Print Grade C"]
    I -->|No| K{"marks >= 40?"}
    K -->|Yes| L["Print Grade D"]
    K -->|No| M["Print Fail"]
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

```c
#include <stdio.h>

int main()
{
    int marks = 85;

    if (marks >= 80)
    {
        if (marks >= 90)
            printf("Grade A+\n");
        else
            printf("Grade A\n");
    }
    else
    {
        if (marks >= 70)
            printf("Grade B\n");
        else
        {
            if (marks >= 60)
                printf("Grade C\n");
            else
            {
                if (marks >= 40)
                    printf("Grade D\n");
                else
                    printf("Fail\n");
            }
        }
    }

    return 0;
}
```

### Input
No user input is required. The marks are predefined as 85.

### Output

```text
Grade A
```

### Summary
This program uses nested if statements to assign a grade based on the student's marks.

---

## Conclusion

In this lab, we practiced nested if statements in C to find the largest number, find the smallest number, and determine a student's grade.
