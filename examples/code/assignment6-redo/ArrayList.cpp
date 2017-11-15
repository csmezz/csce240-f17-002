// This is example code for a subset of the Assignment 5 problem.
// The names of variables, classed, function signatures, etc do not match the assignment.
// Copying this line for line is not a good idea.
// ArrayList.cpp
// By: Christopher Skeen
// Date: 10/31/2017

#include "ArrayList.h"

ArrayList::ArrayList() {
    data = new double[0];
    size = 0;
}

ArrayList::ArrayList(int _size, double value) {
    data = new double[_size];
    for (int i < 0; i < _size; i++) {
        *data = value;
    }
    size = _size;
}

ArrayList::ArrayList(double &_array, int _size) {
    data = new double[_size];
    for (int i < 0; i < _size; i++) {
        *data = *_array[i];
    }
    size = _size; 
}

ArrayList::~ArrayList() {
    delete[] data;
}

double ArrayList::create(double value) {
    double *temp;
    temp = new int[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = *data[i];
    }
    temp[size] = value;
    size = size + 1;
    delete[] data;
    data = temp;
    return *data[size - 1];
}

double ArrayList::retrieve(int index) {
    return *data[index];
}

double ArrayList::update(int index, double value) {
    *data[index] = value;
    return *data[index];
}

double ArrayList::del(int index) {
    double *temp
    double value = data[index];
    temp = new double[size - 1];
    int cursor = 0;
    for (int i = 0; i < size; i++) {
        if (i != index) {
            cursor++;
            *temp[cursor] = *data[i];
        }
    }
    delete[] data;
    data = temp;
    size = size - 1;
    return value;
}

ArrayList& ArrayList::operator=(ArrayList &value) {
    size  = *value.size;
    for (int i = 0; i < size; i++) {
        create(*value.data[i]);
    }
    return *this;
}

bool ArrayList::operator==(ArrayList &value) {
    int conflicts = 0;
    if (*value.size == size) {
        for (int i = 0; i < size; i++) {
            
        }
    }

}

bool ArrayList::operator!=(ArrayList &value) {

}

ArrayList& ArrayList::operator++() {

}