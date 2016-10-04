/*************************************************************************
    2       This file is borrowed heavily from Main/Savitch "Data Structures and
    3       Other Object Using C++," Chapter 5. It features a node class that
    4       can be used in the construction of linked lists.
    5                 John Dolan          March 2009
    6 *************************************************************************/
    7
    8 #ifndef NODE_H
    9 #define NODE_H
   10 #include "course.h"
   11
   12 class node{
   13     public:
   14     typedef course value_type;
   15     // Universal constructor
   16         node(value_type d = value_type(), node *l = NULL)
   17         {data_field = d;  link_field = l;}
   18
   19         // Mutator functions
   20     void set_data(value_type d)
   21         {data_field = d;}
   22     void set_link(node *l)
   23         {link_field = l;}
   24
   25         // Accessor functions
   26         value_type data() const
   27         {return data_field;}
   28         node* link()
   29         {return link_field;}
   30     const node* link() const
   31         {return link_field;}
   32
   33     private:
   34     value_type data_field;
   35     node* link_field;
   36 };
   37
   38 #endif
