CXX=g++
CXX_VER=c++11
CXX_FLAGS= -g
SRC=main.cpp func.cpp

test: ${SRC}
	${CXX} ${SRC} ${CXX_FLAGS} -std=${CXX_VER} -o $@

ref: ref.cpp
	${CXX} ref.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

const: const.cpp
	${CXX} const.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

.PHONY: clean
clean:
	rm -rf *.o test ref const
