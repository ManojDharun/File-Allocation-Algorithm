res.exe:myexImp.o myexApp.o
        c++ myexImp.o myexApp.o -o res.exe
myexImp.o:myexImp.c++
        c++ -c myexImp.o
myexApp.o:myexApp.c++
        c++ -c myexApp.o
