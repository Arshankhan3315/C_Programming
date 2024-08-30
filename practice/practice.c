// Write a C program to find the sum of individual digits of a positive integer.
#include <stdio.h>
int main() {
    int num, sum = 0;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Calculate sum of digits
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit from num
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
// Write a C program, to find both the largest and smallest number in a list of integers using an Array.
#include <stdio.h>
int main() {
    int n, i;
    int largest, smallest;
    // Input: number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; // Declare the array
    // Input: elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Initialize largest and smallest with the first element
    largest = smallest = arr[0];
    // Traverse the array to find the largest and smallest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    // Output the results
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
    return 0;
}
// Write a C Program to Find the Largest among 3 Numbers.
#include <stdio.h>
int main() {
    int num1, num2, num3, largest;
    // Input: Three numbers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // Compare the numbers to find the largest
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }
    // Output the result
    printf("The largest number is: %d\n", largest);
    return 0;
}
// C Program to Store Information of Student (Name, Roll Number and Marks) Using Structure.
#include <stdio.h>
// Define a structure to hold student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
int main() {
    struct Student student;
    // Input: Student details
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    // Output: Display student details
    printf("\nStudent Information:\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}
// Write a C program using structure to store details about a book (title, author, yearPublished, price)
#include <stdio.h>
// Define a structure to hold book information
struct Book {
    char title[100];
    char author[50];
    int yearPublished;
    float price;
};
int main() {
    struct Book book;
    // Input: Book details
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter year of publication: ");
    scanf("%d", &book.yearPublished);
    printf("Enter price: ");
    scanf("%f", &book.price);
    // Output: Display book details
    printf("\nBook Information:\n");
    printf("Title: %s", book.title);
    printf("Author: %s", book.author);
    printf("Year Published: %d\n", book.yearPublished);
    printf("Price: $%.2f\n", book.price);
    return 0;
}
// anoter
#include <stdio.h>
#include <string.h>

// Define a structure to hold book information
struct Book {
    char title[100];
    char author[100];
    int yearPublished;
    float price;
};
int main() {
    struct Book book;
    // Input: Book details
    printf("Enter the title of the book: ");
    fgets(book.title, sizeof(book.title), stdin);
    // Remove trailing newline character
    book.title[strcspn(book.title, "\n")] = '\0';
    printf("Enter the author of the book: ");
    fgets(book.author, sizeof(book.author), stdin);
    // Remove trailing newline character
    book.author[strcspn(book.author, "\n")] = '\0';
    printf("Enter the year the book was published: ");
    scanf("%d", &book.yearPublished);
    printf("Enter the price of the book: ");
    scanf("%f", &book.price);
    // Output: Display book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Year Published: %d\n", book.yearPublished);
    printf("Price: $%.2f\n", book.price);
    return 0;
}
// Write a C program to create Fibonacci series
#include <stdio.h>
int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;
    // Input: number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Output: First n terms of the Fibonacci series
    printf("Fibonacci Series: %d, %d", t1, t2);
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}
//Write a C program to check if a number is prime or not.
#include <stdio.h>
int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime
    // Input: Number to check
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Handle edge cases
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors other than 1 and the number itself
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, it's not prime
                break;
            }
        }
    }
    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
// Write a C program for concatenating two strings
#include <stdio.h>
int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;
    // Input: First string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    // Input: Second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline character from fgets input (if present)
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    // Concatenating str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    // Null-terminate the concatenated string
    str1[i] = '\0';
    // Output: Display concatenated string
    printf("Concatenated String: %s\n", str1);
    return 0;
}
// Write a C program to find the sum of individual digits of a positive integer
#include <stdio.h>
int main() {
    int num, sum = 0;
    // Input: Positive integer from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Ensure the number is positive
    if (num < 0) {
        printf("The number must be positive.\n");
        return 1; // Exit with error code
    }
    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit from num
    }
    // Output: Display the sum of digits
    printf("Sum of the digits: %d\n", sum);
    return 0;
}
// C program to perform addition, subtraction, multiplication, and division using user-defined functions.
#include <stdio.h>
// Function prototypes
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
int main() {
    float num1, num2;
    int choice;
    // Input: Two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    // Menu for operations
    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    // Perform the chosen operation
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
// Function definitions
void add(float a, float b) {
    printf("Result of addition: %.2f\n", a + b);
}
void subtract(float a, float b) {
    printf("Result of subtraction: %.2f\n", a - b);
}
void multiply(float a, float b) {
    printf("Result of multiplication: %.2f\n", a * b);
}
void divide(float a, float b) {
    if (b != 0) {
        printf("Result of division: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
// Write a C program to find the Sum of Array Elements
#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;
    // Input: Number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Declare the array
    int arr[n];
    // Input: Array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate the sum of array elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    // Output: Display the sum
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
// C program to perform addition, subtraction, multiplication, and division using user-defined functions.
#include <stdio.h>
// Function prototypes
void add(float a, float b);
void subtract(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
int main() {
    float num1, num2;
    int choice;

    // Input: Two numbers from the user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Menu for operations
    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    // Perform the chosen operation
    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
// Function definitions
void add(float a, float b) {
    printf("Result of addition: %.2f\n", a + b);
}
void subtract(float a, float b) {
    printf("Result of subtraction: %.2f\n", a - b);
}
void multiply(float a, float b) {
    printf("Result of multiplication: %.2f\n", a * b);
}
void divide(float a, float b) {
    if (b != 0) {
        printf("Result of division: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
// Write a C Macro for Swapping Two Numbers.
#include <stdio.h>
// Macro definition for swapping two numbers
#define SWAP(a, b) do { \
    typeof(a) temp = a; \
    a = b; \
    b = temp; \
} while (0)
int main() {
    int x, y;
    // Input: Two numbers
    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);
    // Display numbers before swapping
    printf("Before swapping: x = %d, y = %d\n", x, y);
    // Swap the numbers
    SWAP(x, y);
    // Display numbers after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}
// Create a simple calculator that performs basic arithmetic operations (addition, subtraction, multiplication, and division) on two integer operands.
#include <stdio.h>
int main() {
    int num1, num2;
    int choice;
    int result;
    // Input: Two integers from the user
    printf("Enter two integers:\n");
    scanf("%d %d", &num1, &num2);
    // Menu for operations
    printf("\nSelect operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    // Perform the chosen operation
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result of addition: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result of subtraction: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result of multiplication: %d\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of division: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}