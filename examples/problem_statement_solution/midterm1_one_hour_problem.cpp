#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

/* This is the SI Peer Leader's reference implementation of the one hour jellybean sorting problem.
 * There are easier and shorter ways to do this--the reference implementation is here to elaborate
 * on some common C++ and C idioms and patterns.
 * By: Christopher Skeen.
 * Permission granted for use as a reference. 
 */

// Setting the size of the array globally.
int num_beans = 5;

// What's going on here? C (and, therefore, C++) allows you to define data structures called structs, which encompass multiple types of data.
// They're sort of lightweight object that are used to store related sets of data. You can reference an element of a struct in struct_name.element_name format.
// For example, if I wanted the color code of jellybean one, I would use the syntax jellybean1.color_code. Structs need to be instantiated just like 
// variables do. You can see an example of that in the create_jellybean() function.
struct jelly_bean {
	char color_string[32];
	char flavor_string[32];
	int color_code;
	int flavor_code;
	int calculated_weight;
};

// This instantiates a specific jelly_bean struct. Input the variables you want, and it spits out a jelly_bean "object" you can insert into some other data structure.
jelly_bean create_jellybean(char col_str[], char flav_str[], int col_code, int flav_code, int calc_weight) {
	jelly_bean temp;
	strcpy(temp.color_string, col_str);
	strcpy(temp.flavor_string, flav_str);
	temp.color_code = col_code;
	temp.flavor_code = flav_code;
	temp.calculated_weight = calc_weight;
	return temp;
}

// This swaps two beans in a specified array. The beans are specified by index.
void swap_beans(jelly_bean bean_array[], int index_1, int index_2) {
	jelly_bean temp;
	temp = bean_array[index_1];
	bean_array[index_1] = bean_array[index_2];
	bean_array[index_2] = temp;
}

// This function is a useful method in general to determine the size of a statically allocated array.
int array_length(jelly_bean bean_array[]) {
	// Uses statically defined array length now.
	return num_beans;
}

// swap_beans() and array_length() come before bubble_sort() because they're functions used within bubble sort.
// Since we're not actually using classes in this example, the code for functions must be present ahead of
// any other function that calls them.

// This performs a bubble sort on an array of jelly_bean objects and returns the new version of the array.
// This version compared the calculated weight of the bean using color in tens and flavor in ones.
jelly_bean * bubble_sort_weight(jelly_bean bean_array[]) {
	int i, j;
	int ary_len = array_length(bean_array);
	cout << ary_len << endl;
	for (i = 0; i < ary_len; i++) {
		for (j = 0; j < (ary_len - 1); j++) {
			cout << bean_array[j].calculated_weight << " <? " << bean_array[j+1].calculated_weight << endl;
			if (bean_array[j].calculated_weight < bean_array[j+1].calculated_weight) {
				cout << "Should swap..." << endl;
				swap_beans(bean_array, j, j+1);
			}
		}
	}
	return bean_array;
}

// This function will translate colors in string format to color priority codes, which are integers.
// A return code of 0 indicates some sort of encoding error--likely a misspelled word.
// This could be done with a switch statement, but I think the if statements are a little more clear.
int jb_encode_color(char color_string[]) {
	char red[] = "red";
	char green[] = "green";
	char blue[] = "blue";
	if (strcmp(color_string, red)) {
		return 3;
	}
	else if (strcmp(color_string, green)) {
		return 2;
	}
	else if (strcmp(color_string, blue)) {
		return 1;
	}
	else {
		return 0;
	}
}

// Same as jb_encode_color, but with flavor priorities instead.
int jb_encode_flavor(char flavor_string[]) {
	char cinnamon[] = "cinnamon";
	char cherry[] = "cherry";
	char apple[] = "apple";
	char bubblegum[] = "bubblegum";
	if (strcmp(flavor_string, cinnamon)) {
		return 4;
	}
	else if (strcmp(flavor_string, cherry)) {
		return 3;
	}
	else if (strcmp(flavor_string, apple)) {
		return 2;
	}
	else if (strcmp(flavor_string, bubblegum)) {
		return 1;
	}
	else {
		return 0;
	}
}

// This does the interface bits for creating a new jelly_bean "object". You can check the validity of the resulting jelly_bean by checking color_code.
// color_code = 0 means there was a problem with color. flavor_code = 0 mean there was a problem with flavor. In the event of a color failure, there
// will also be a flavor failure since flavor will not be collected.
jelly_bean new_jb_interface(int index) {
	cout << endl << "Please input the color of jelly bean " << (index + 1) << " in lower case letters" << endl;
	char raw_color[32];
	cin >> raw_color;
	int jb_color_temp = jb_encode_color(raw_color);
	// This is a validation step.
	if (!(jb_color_temp > 0)) {
		cout << endl << "Input invalid. Please try again." << endl;
		jelly_bean temp;
		temp.color_code = jb_color_temp;
		// We also need to make flavor an invalid result, for error checking later. If we don't, we may reference an uninitialized variable.
		temp.flavor_code = 0;
		return temp;
	}
	cout << endl << "Please input the flavor of jelly bean " << (index + 1) << " in lower case letters" << endl;
	char raw_flavor[32];
	cin >> raw_flavor;
	int jb_flavor_temp = jb_encode_flavor(raw_flavor);
	// Another validation step.
	if (!(jb_flavor_temp > 0)) {
		cout << endl << "Input invalid. Please try again." << endl;
		jelly_bean temp;
		temp.color_code = jb_color_temp;
		temp.flavor_code = jb_flavor_temp;
		return temp;
	}
	int jb_calculated_weight = (10 * jb_color_temp) + jb_flavor_temp;
	// This will return a full jellybean object.
	return create_jellybean(raw_color, raw_flavor, jb_color_temp, jb_flavor_temp, jb_calculated_weight);
}

// Finally we reach the main function!
int main() {
	// Someday you might want to change the number of beans in the jar...
	jelly_bean bean_collection[num_beans];
	cout << "Welcome to the bean sorter!" << endl;
	for (int i = 0; i < num_beans; i++) {
		bean_collection[i] = new_jb_interface(i);
		if ((bean_collection[i].color_code == 0) || (bean_collection[i].flavor_code == 0)) {
			bean_collection[i] = new_jb_interface(i);
		}
	}
	bubble_sort_weight(bean_collection);
	cout << endl << "{";
	// Prints out the sorted array in reverse order so the highest priority prints first. See comment for bubble_sort_weight().
	for (int j = 0; j < num_beans; j++) {
		cout << "<" << bean_collection[j].color_string << ", " << bean_collection[j].flavor_string << ">";
		// If not (first element or last element)...
		if (!(j == (num_beans - 1))) {
			// Make pretty, with commas in between elements.
			cout << ", ";
		}
	}
	cout << "}" << endl;
}
