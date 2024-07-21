# Pseudo-CNN-network
This project implements a pseudo Convolutional Neural Network (CNN) with various modes to perform different operations such as printing weights, calculating weighted sums, applying the ReLU function, softmax, and finding maximum values. The project is written in C and consists of several functions organized in different modes.

Files
Pceudo_cnn_.c: Contains the main logic of the program.
functions.h: Contains declarations for the ReLU function and other helper functions.
data.h: Contains macros, weights, and bias values.
Prerequisites
GCC compiler to compile the C code.
Standard C libraries.
Compilation
To compile the code, use the following command:

gcc -o pseudo_cnn Pseudo_cnn_.c

Usage
Run the compiled executable and follow the prompts to enter the desired mode and inputs.

./pseudo_cnn

Modes
Mode 1: Print Weights

Prints the weights for a specific image index.
Input: Image index (0-9).
Mode 2: Calculate Weighted Sum

Calculates the weighted sum for a specific image index.
Input: Image index (0-9).
Output: Weighted sum value.
Mode 3: Apply ReLU Function

Applies the ReLU function to a given number.
Input: A number.
Output: ReLU applied value.
Mode 4: Apply Softmax Function

Applies the softmax function to a set of 10 numbers.
Input: 10 numbers.
Output: Softmax applied values.
Mode 5: Find Maximum Value

Finds the index of the maximum value in a set of 10 numbers.
Input: 10 numbers.
Output: Index of the maximum value.
Mode 6: Print Image

Loads and prints image data.
No additional input required.
Mode 7: Classify Image

Classifies the image data using softmax and finds the predicted class.
No additional input required.
Functions
rezim1(): Handles Mode 1 functionality.
rezim2(double* Data): Handles Mode 2 functionality.
rezim3(): Handles Mode 3 functionality.
rezim4(): Handles Mode 4 functionality.
rezim5(): Handles Mode 5 functionality.
rezim6(double* Data): Handles Mode 6 functionality.
rezim7(double* Data): Handles Mode 7 functionality.
softmax(double *output, double *input): Applies the softmax function to the input array.
findmax(double *pole): Finds the index of the maximum value in the input array.
Example
To run the program and use Mode 1:
./pseudo_cnn
Enter 1 when prompted for the mode, then enter an image index (e.g., 3). The program will print the weights for the specified image index.

Notes
Ensure that the functions.h and data.h files are present in the same directory as the main.c file.
Modify the weights and bias values in data.h as needed.
