test:main.cpp test.cpp test.h
	g++ -o test main.cpp test.cpp
.PHONY:clean
clean:
	rm -f test
