// People Pairer
// Written Sept. 12th 2017
// Finds unique random pairs of people.

// A note for Dr. Valafar's students: this implementation uses vectors, which are a part of the
// C++ Standard Template Library. Dr. Valafar does not want you to use STL classes in your
// assignments. You can implement a version of this using classic arrays without a lot of trouble. 
// Can you identify a part of this program that would be hard to re-implement using nothing but 
// classic arrays? Send me an email if you have trouble!

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// We need to get the size of the group of people...
	int size;
	cout << "How many people are in the room?" << endl;
	cin >> size;

	// We want to store a vector that lists out the total number of people.
	// There are other ways we could do this, but this method is easier to
	// follow and the machine we're running this on has power to spare.
	vector<int> people; // Initialize a vector of ints.
	for (int i = 0; i < size; i++) {
		people.push_back( i+1 );
		// This is pushing a human-friendly value for each person's number into the people vector. 
	}
	
	// We need to figure out how many pairs we're going to have in total,
	// but we need to handle the case with an odd number of people. The
	// participants in the session voted to leave the odd person out.
	int p_size;
	if ((size % 2) == 0) {
		p_size = size / 2;
	}
	else {
		p_size = (size + 1) / 2;
	}

	// We want to split the total number of people up into pairs of two,
	// so we will create a vector of vectors, where each vector in the
	// inner level is a vector containing two people.
	vector< vector<int> > pairs;
	pairs.resize(p_size); // This guarantees that pairs is large enough.
	srand(time(0)); // Set a random seed for the RNG.

	// Now that we know how many pairs there will be, we need to assign
	// each person to a random pair, and also to make sure that no pair
	// gets more than two people added.
	for (int i = 0; i < size; i++) {
		int rand_pair = -1;
		int temp;
		while (rand_pair == -1) {
			temp = rand() % p_size; // This produces a value between 0 and p_size.
			if (pairs[temp].size() < 2) {
				rand_pair = temp;
			}
		} // rand_pair is guaranteed to be a pair with space remaining after this point.
		pairs[rand_pair].push_back(people[i]); // This inserts the current person into a random pair.
	}
	
	// Now we want to print out the pairs to get our results...
	cout << "These are the random pairs in the group..." << endl;
	for (int i = 0; i < p_size; i++) { // We want to loop through all the pairs.
		for (int j = 0; j < pairs[i].size(); j++) { // We want to loop through all elements of each pair.
			cout << pairs[i][j];
			if (j == 0) {
				cout << ", "; // We want a comma between the first and second elements...
			}
		}
		cout << endl;
	}
}
