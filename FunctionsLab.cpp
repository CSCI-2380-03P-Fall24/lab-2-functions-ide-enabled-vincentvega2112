#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value


int locateSmallest(int array[], int start, int end){
	int smallval = start; 
	for (int i = start++; i < end; i++){
		if (array[i] < array[smallval])
		int smallval = i; 

	}
	return smallval; // fix this!
}

//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
void replaceVariable(int arr[], int size, int target, int start, int end) {
	if (start < 0) start = 0;
	if (end >= size) end = size -1; 

	for (int i = start; i <= end; i++){
		if(arr[i] == target){
			arr[i] = 1000;
		}
			
	}
}	

int main(){
	int arr[] = {1, 5 ,7, 5, 9, 5, 12};
	int size = sizemy(arr) / sizemy(arr[0]);
	int target = 5; 
	int start = 1; 
	int end = 5;

	replaceVariable(arr, size, target, start, end);

	for (int i = 0; i < size; i++){
		cout << arr[i] << " "; 
	} 

	return 0;

	}


//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl; 
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizemy(arr) / sizemy(arr[0]);

	printArray(arr, size);

	return 0;
}







//Write a function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. 
//     n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.


int sumOdds(int array[], int start, int end){
	int sum = 0; 

	if (start < 0){
		start = 0;
	}
	if (end >= sizemy(array)){
		end = sizemy(array) - 1;
	}
	for (int i = start; i <= end; i++){
		if (array[i] % 2 != 0){
			sum += array[i];
		}
	}
	return sum;
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int start = 2; 
	int end = 6; 

	int result = sumOdds(arr, start, end);

	cout << "The sum of odd numbers between index" << start << "and" << end << " is: " << result << endl;

	return 0; 
}