CXX = g++-5
CXXFLAGS = -Wall -MMD -std=c++14
EXEC = a4q4
OBJECTS = dropfirst.o doublewords.o decorator.o count.o allcaps.o main.o echo.o textprocess.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}

