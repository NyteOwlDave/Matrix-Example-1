#include <stdlib.h>
#include <iostream>

// Syrian's problem for summing diagonal matrix elements
int matrix_test_01() {
	int n, trace = 0;
	int **arr;

	// Enter the array dimensions n, so that M = [n x n]
	cout << "Enter the array's order (0 < n < 10)" << endl;
	cin >> n;

	// Check for invalid array bounds
	if ((n < 0) || (n > 10)) {

		// Display an error message for input we can't use
		cout << ":( Oops! I can't make arrays of that order." << endl;

		// Ask the user to enter anything they wish
		// before exiting the application
		cout << "Enter any value to exit..." << endl;

		// Wait for the user to enter anything they wish
		// before exiting the application
		string buffer;
		cin >> buffer;

		// Good practice is to always return SOME value from main()!!!
		// Returning -1 (or any non-zero value) indicates FAILURE.
		return -1;
	}

	// Allocate an array of integer array pointers 
	arr = new int*[n];

	// Allocate an array of integers for each row
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	// Generate some random values from set [1...10] 
	//  for each element in the matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = int(rand()*10/RAND_MAX+0.5f);
		}
	}

	// Display the initial value of the trace variable
	// (just so the user can see how the equation works)
	cout << "\nTrace = " << trace << endl;

	// Now do your trace!!!
	for (int i = 0; i < n; i++) {
		// Display the next diagonal element to be summed
		// (just so the user can see how the equation works)
		cout << "Trace += " << arr[i][i] << endl;
		// Sum the next diagonal element
		trace += arr[i][i];
	}

	// Display the final trace result...
	cout << "Trace = " << trace << endl;

	// Ask the user to enter anything they wish
	// before exiting the application
	cout << "Enter any value to exit..." << endl;
	
	// Wait for the user to enter anything they wish
	// before exiting the application
	string buffer;
	cin >> buffer;

	// Good practice is to always return SOME value from main()!!!
	// Returning 0 is the preferred return value for SUCCESS.
	return 0;
}
