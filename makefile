export EXE := ./bin/epi
export source_files := $(wildcard ./src/*.cpp)
export obj_files := $(patsubst ./src/%.cpp, ./src/%.o, $(source_files))

$(EXE) : $(obj_files)
	g++ $^ -o $@
	rm ./src/*.o
./src/%.o : ./src/%.cpp
	g++ -c $^ -o $@
clean :
	rm output.txt $(EXE)
        

