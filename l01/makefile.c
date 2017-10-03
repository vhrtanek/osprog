

default target: program.c
    cc -c -o program.o -fPIC program.c /
    cc -o libnumber.so -shared program.o

clean:
    rm program.o
    
distclean: clean
    rm program.o libnumber.so
    
test: test.sh
    cc -c test.sh
    

    
