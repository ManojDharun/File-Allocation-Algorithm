#include"myexHdr.h"

Node::Node(int v,Node *n)
{
        val = v;
        n = NULL;
}

void linked::getdetails()
{
        cout<<"ENTER THE DISK SPACE :"<<endl;
        cin>>disk_space;
        cout<<"ENTER THE NO OF FILE :"<<endl;
        cin>>file;
        cout<<"ENTER THE LENGTH OF EACH FILE :"<<endl;
        size_of_file = new int[file];
        int i;
        for(i=0;i<file;i++)
        {
                cin>>size_of_file[i];
        }
}

int linked::get_ran()
{
        int random = rand() % disk_space;
        return random;
}

void linked::initialize()
{
        bit_vector = new int[disk_space];
        for(int i=0;i<disk_space;i++)
        {
                bit_vector[i] = 1;
        }
}

void linked::insert(Node *newnode,Node **first,int n)
{
        if(first[n] == NULL)
                first[n] = newnode;
        else
        {
                Node* temp = first[n];
                while(temp -> next != NULL)
                {
                        temp = temp -> next;
                }
                temp -> next = newnode;
        }
}

void linked::makelinkedlist(int num)
{
        first = new Node*[num];
}

void linked::allocatefiles(int size_of_file,int n)
{
        first[n] = NULL;
        int i;
        for(i=0;i<size_of_file;i++)
        {
                int new_num = get_ran();
                if(bit_vector[new_num] == 0)
                {
                        i = i-1;
                        continue;
                }
                bit_vector[new_num] = 0;
                Node *newnode = new Node(new_num,NULL);
                insert(newnode,first,n);
        }
}

void linked::display()
{
        int i;
        for(i=0;i<file;i++)
        {
                display1(first[i]);
                cout<<"\n";
        }
        for(i=0;i<disk_space;i++)
        {
                cout<<"     "<<bit_vector[i]<<endl;
        }
}

void linked::display1(Node *first1)
{
        Node* temp = first1;
        while(temp!=NULL)
        {
                cout<<temp -> val<<"    ";
                temp = temp -> next;
        }
}
