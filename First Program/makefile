CXX=g++
CXX_VER=c++11
# CXX_FLAGS= -g -Xlinker -Map=output.map
# CXX_FLAGS= -S
CXX_FLAGS= -g
SRC=main.cpp func.cpp

test: ${SRC}
	${CXX} ${SRC} ${CXX_FLAGS} -std=${CXX_VER} -o $@

ref: ref.cpp
	${CXX} ref.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

const: const.cpp
	${CXX} const.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

assem: assem.cpp
	${CXX} assem.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

fptr: fptr.cpp
	${CXX} fptr.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

mem: mem.cpp
	${CXX} mem.cpp ${CXX_FLAGS} -std=${CXX_VER} -o $@

.PHONY: clean
clean:
	rm -rf *.o main test ref const assem fptr mem
