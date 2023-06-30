#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
        Node(int,Node*);
        int val;
        Node* next;
        friend class linked;
};

class linked
{
        public:
                void getdetails();
                int get_ran();
                void initialize();
                void insert(Node*,Node**,int);
                void makelinkedlist(int);
                void allocatefiles(int,int);
                void display();
                void display1(Node*);
                int file,disk_space;
                int *size_of_file;
                Node **first;
                int *bit_vector;
};
