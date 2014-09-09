UIC = uic

CXXFLAGS = -std=c++11 -lstdc++
PATH_INC = include

all: wpvcs
	
bin/wpvcs: build/wpvcs.o
	$(CXX) $(CXXFLAGS) -o $@ $<
	
build/wpvcs.o: src/wpvcs/main.cxx
	$(CXX) $(CXXFLAGS) -I $(PATH_INC) -c $< -o $@
	
view: include/wpvcs/view/ui/*.ui
	for view in $^;\
	do\
	    dirName=$$(dirname $$view);\
	    baseName=$$(basename $$view);\
	    $(UIC) $$view -o $$dirName/../raw/$$baseName.hxx;\
	done
	
clean:
	$(RM) -rf build/* bin/*