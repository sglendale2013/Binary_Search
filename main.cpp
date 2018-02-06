//Function to perform a binay search of an array
//Precondition: Elements of array arr are in ascending order and the first n elements are to be searched for an item.
//Postcondition: found is true and mid is the position of item if the search is successful; otherwise found is false.

#include<iostream>
#include<array>

int main() {

	//Better way to initialize array
	std::array<int, 7> arr;
	int last, first = 0, item = 0, mid = 0;
	bool found = false;
	arr = { 45, 64, 68, 77, 84, 90, 96 };

	std::cout << "Please enter the item you would like to search for: ";
	std::cin >> item;
	last = arr.size() - 1;
	

	while (first <= last && !found)
	{									//First run with item 84
		mid = (first + last) / 2;		// 0 + 6 = 6; 6/2 = 3;
		if (item < arr[mid])			// if 84 < (arr[3] = 77),  last = 3-1 = 2 ;
			last = mid - 1;
		else if (item > arr[mid])		// ElseIf 84 > (arr[3] = 77), first = 3+1= 4;
			first = mid + 1;
		else
			found = true;
	}

	//Output
	if (found == true)
		std::cout << "Item " << item << " found at array position " << mid << std::endl;

	return 0;
}
