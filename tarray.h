/*********************************************************************
   2     This is a class to introduce you to the syntax of working with
   3     template classes. Notice that the type being stored is completely
   4     anonymous.
   5     Your assignment is to implent the eight functions listed in this
   6     header in a tarray.template file.
   7         Lab 7       Fall 2014
   8     John Dolan          Ohio University
   9 ********************************************************************/
  10
  11 #include<iostream>
  12
  13 template<class T>
  14 class Tarray{
  15     public:
  16     // Constructor makes an object with a dynamic array of size 5
  17     Tarray();
  18
  19         // This function puts the item into the next available spot in the
  20     //array.
  21     // If the array is full, resize is called.
  22     void add(T item);
  23
  24     // iterator functions
  25
  26     // places the current_index at the beginning of the array
  27     void start();
  28
  29     // returns true if the current index is less than used
  30     bool is_item()const;
  31
  32     // moves current index to the next array location
  33     void advance();
  34
  35     // returns the array item being referenced by cuurent index
  36     T current()const;
  37
  38     // removes the item at the current index spot
  39     void remove_current();
  40     private:
  41     void resize();
  42     T *data; // pointer to the dynamic array
  43     std::size_t capacity;
  44     std::size_t used;
  45     std::size_t current_index;
  46 };
  47
  48 // This is how we hook this to the implementation file for templates:
  49 #include "tarray.template"
