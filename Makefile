CXX = clang++ -std=c++14

OPT = -Ofast

INCLUDE = -I.

all: test

test: md5.o sha1.o sha2.o test.C
	$(CXX) $(OPT) $(INCLUDE) $@.C -o $@ md5.o sha1.o sha2.o

md5.o: md5.H md5.C
	$(CXX) $(OPT) $(INCLUDE) -c md5.C

sha1.o: sha1.H sha1.C
	$(CXX) $(OPT) $(INCLUDE) -c sha1.C

sha2.o: sha2.H sha2.C
	$(CXX) $(OPT) $(INCLUDE) -c sha2.C

clean:
	$(RM) *~ *.o test
