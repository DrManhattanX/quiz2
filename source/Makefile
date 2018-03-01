CC=gcc
CXX=g++
RM=rm -f

all : build myexe doc doczip clean
	
build : collegemain.o college.o course.o
	$(CXX) -g -o main collegemain.o college.o course.o

collegemain.o : collegemain.cc college.h course.h node.h

college.o : college.cc college.h course.h node.h

course.o : course.h course.cc

myexe : main
	mv main myexe
doc : Doxyfile
	doxygen Doxyfile
doczip : 
	tar -cvzf source.tgz ../source
clean : 
	$(RM) main *.o