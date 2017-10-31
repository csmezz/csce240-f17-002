// This is example code for a subset of the Assignment 5 problem. Not all functions are implemented, only a few example functions.
// The names of variables, classes, function signatures, etc do not match the assignment. 
// Copying this line for line is not a good idea.
// ArrayList.h
// By: Christopher Skeen
// Date: 10/31/2017

class ArrayList {
    public:
         ArrayList();
         ArrayList(int _size, double value);
         ArrayList(double *_array, int size);
         ~ArrayList();
         void insert(int index, double *value);
         void remove(int index);
         double get(int index);
         int find(double *value);
         bool equals(double *value);
         void init(double *value);
         ArrayList& operator=(ArrayList *value);
         bool operator==(ArrayList *value);
         bool operator!=(ArrayList *value);
         ArrayList& operator++();
    private:
         double *data;
         int size;
};