// FirstLibrary.cpp : Defines the entry point for the application.
//

#include "FirstLibrary.h"

using namespace std;

/*
* ANOTHER OPTION
bool Division::dividedBy2(int num) {
	return num % 2 == 0;
};
*/

/*
bool Division::dividedBy2(int num) {
	return (num & 1) == 0;
};
*/


/*
* bool Division::diBy2(int num) {
	int n[] = { 0 };
	int a = 0; // a есть z (множина значений)
	if (num >= 10 ) {
		for (int i = num; i >0; i /= 10) {
			n[a] = i - i / 10 * 10;
			if (n[0] == 2 ||  n[0] == 4 ||  n[0] == 8 ||  n[6] == 0 ) {
				return "True";
			}
			else {
				return "False";
			}
		}
		a++;
	}
	else {
		if (num == 2 ||  num == 4 ||  num == 6 ||  num == 8 ) {
			return "True";
		}
		else {
			return "False";
		}
	}
}
*/


bool Division::diBy2(int num) {
	if (num == 0) {
		return "True";
	}
	int lastDigit = abs(num % 10);
	return (lastDigit == 0 || lastDigit == 2 || lastDigit == 4 || lastDigit == 6 || lastDigit == 8 || lastDigit == 10) ;
}


/*
bool Division::diBy2(int num) {
	return num - (num / 2) * 2 == 0 ;
}
*/


/*ANOTHER OPTION
* bool Division::dividedBy3(int num) {
	return num % 3 == 0;
};
*/

bool Division::diBy3(int num) {
	return num % 3 == 0;
	
}

/*ANOTHER OPTION
* bool Division::dividedBy4(int num) {
	return num % 4 == 0;
};
*/

bool Division::diBy4(int num) {
	return (num & 3) == 0;
};

/*ANOTHER OPTION
bool Division::dividedBy5(int num) {
	return num % 5 == 0;
};
*/

bool Division::diBy5(int num) {
	return num * 0xCCCCCCCD <= 0x33333333;
};

/*ANOTHER OPTION
bool Division::dividedBy6(int num) {
	return num % 6 == 0;
};
*/

bool Division::diBy6(int num) {
	bool divby2 = (num & 1) == 0;
	int sum = 0;
	while (num > 0) {
		sum = num % 10;
		num /= 10;
	}
	bool divby3 = (sum % 3) == 0;

	return divby2 && divby3;
};

bool Division::diBy7(int num) {
	return num % 7 == 0;
};


bool Division::diBy8(int num) {
	return num % 8 == 0;
};

/*ANOTHER OPTION
* bool Division::dividedBy8(int num) {
	return (num >> 3) << 3 == num;
};
*/

/*ANOTHER OPTION
* bool Division::dividedBy9(int num) {
	return num % 9 == 0;
};
*/

bool Division::diBy9(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum % 9 == 0;
};


int main()
{
	int num;
	cout << "Enter the num : ";
	cin >> num;

	if (Division ::diBy2(num)) {
		cout << num << " is divisible by 2" << endl;
	}
	else {
		cout << num << " is not divisible by 2" << endl;
	}

	if (Division::diBy3(num)) {
		cout << num << " is divisible by 3" << endl;
	}
	else {
		cout << num << " is not divisible by 3" << endl;
	}


	if (Division::diBy4(num)) {
		cout << num << " is divisible by 4" << endl;
	}
	else {
		cout << num << " is not divisible by 4" << endl;
	}


	if (Division::diBy5(num)) {
		cout << num << " is divisible by 5" << endl;
	}
	else {
		cout << num << " is not divisible by 5" << endl;
	}


	if (Division::diBy6(num)) {
		cout << num << " is divisible by 6" << endl;
	}
	else {
		cout << num << " is not divisible by 6" << endl;
	}


	if (Division::diBy7(num)) {
		cout << num << " is divisible by 7" << endl;
	}
	else {
		cout << num << " is not divisible by 7" << endl;
	}


	if (Division::diBy8(num)) {
		cout << num << " is divisible by 8" << endl;
	}
	else {
		cout << num << " is not divisible by 8" << endl;
	}


	if (Division::diBy9(num)) {
		cout << num << " is divisible by 9" << endl;
	}
	else {
		cout << num << " is not divisible by 9" << endl;
	}


}
