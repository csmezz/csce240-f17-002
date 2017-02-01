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
}

// This instantiates a specific jelly_bean struct. Input the variables you want, and it spits out a jelly_bean "object" you can insert into some other data structure.
jelly_bean create_jellybean(char * col_str, char * flav_str, int col_code, int flav_code, int calc_weight) {
	jellybean temp;
	temp.color_string = col_str;
	temp.flavor_string = flav_str;
	temp.color_code = col_code;
	temp.flavor_code = flav_code;
	temp.calculated_weight = calc_weight;
	return temp;
}

// This swaps two beans in a specified array. The beans are specified by index.
void swap_beans(jelly_bean * bean_array, int index_1, int index_2) (
	jelly_bean temp = bean_array[index_1];
	bean_array[index_1] = bean_array[index_2];
	bean_array[index_2] = temp;
}

// This function is a useful method in general to determine the size of a statically allocated array.
int array_length(jelly_bean * bean_array) {
	int length = sizeof(bean_array)/sizeof(bean_array[0]);
	return length;
}

// swap_beans() and array_length() come before bubble_sort() because they're functions used within bubble sort.
// Since we're not actually using classes in this example, the code for functions must be present ahead of
// any other function that calls them.

// This performs a bubble sort on an array of jelly_bean objects and returns the new version of the array.
jelly_bean * bubble_sort(jelly_bean * bean_array) {
	int i;
	int j;
	int ary_len = array_length(bean_array);
	for (i = 1; i < ary_len; i++) {
		for (j = 0; j < (ary_len - i); j++) {
			if (bean_array[j] > bean_array[j+1]) {
				swap_beans(bean_array, j, j+1);
			}
		}
	}
	return bean_array;
}

// This function will translate colors in string format to color priority codes, which are integers.
// A return code of 0 indicates some sort of endocing error--likely a misspelled word.
int jb_encode_color(char * color_string) {
	int temp;
	char red[] = "red";
	char green[] = "green";
	char blue[] = "blue";
	if (strcmp(color_string, red) {
		return 3;
	}
	else if (strcmp(color_string, green) {
		return 2;
	}
	else if (strcmp(color_string, blue) {
		return 1;
	}
	else {
		return 0;
	}
}

// This does the interface bits for creating a new jelly_bean "object". You can check the validity of the resulting jelly_bean by checking color_code.
// color_code = 0 means there was a problem creating the bean.
jelly_bean new_jb_interface(int index) {
	jelly_bean temp;
	cout << endl << "Please input the color of jelly bean " << (index + 1) << "in lower case letters" << endl;
	char raw_color[32];
	cin >> raw_color;
	int jb_color_temp = jb_encode_color(raw_color);
	if (jb_color_temp > 0) {
		temp.color_string = raw_color;
		temp.color_code = jb_color_temp;
	}
	else {
		cout << endl << "Input invalid. Please try again." << endl;
		temp.color_code = 0;
		return temp;
	}
	cout << endl << 
}

