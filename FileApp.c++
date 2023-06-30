#include"myexHdr.h"
int main()
{
        int i;
        linked l;
        l.getdetails();
        l.initialize();
        l.makelinkedlist(l.file);
        for(i=0;i<l.file;i++)
        {
                l.allocatefiles(l.size_of_file[i],i);
        }
        l.display();
}
