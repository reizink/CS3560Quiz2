# Reilly Zink Quiz 2

all:
	make build
	make doczip

build:
	make myexe

myexe: collegemain.o college.o course.o
	g++ *.o -o myexe

collegemain.o: collegemain.cc course.h node.h college.h
	g++ -c collegemain.cc

college.o: college.cc college.h
	g++ -c college.cc

course.o: course.cc course.h
	g++ -c course.cc

docs:
	@doxygen
	@open doxygen/html/index.html

doczip: collegemain.cc college.cc course.cc makefile
	tar -cvzf tarball.tar.gz myexe

clean:
	rm *.o myexe
	rm *.gz myexe
	rm *.out myexe
	rm *.html myexe

