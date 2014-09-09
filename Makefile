UIC = uic
MKDIR = mkdir

CXXFLAGS = -std=c++11 -lstdc++ -fPIC
PATH_INC = include /usr/include/qt
INC_EXPR = $(foreach dir, $(PATH_INC),-I $(dir))

all: bin/wpvcs
	
bin/wpvcs: build/wpvcs/wpvcs.o build/wpvcs/view/welcome.o build/wpvcs/view/raw/welcome.o
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) -o $@ $^
	
build/wpvcs/wpvcs.o: src/wpvcs/main.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@

build/wpvcs/view/welcome.o: src/wpvcs/view/welcome.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@
	
build/wpvcs/view/raw/welcome.o: src/wpvcs/view/raw/welcome.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@
	
view: include/wpvcs/view/ui/*.ui
	for view in $^;\
	do\
	    dirName=$$(dirname $$view);\
	    baseName=$$(basename $$view);\
	    $(UIC) $$view -o $$dirName/../raw/$${baseName%.ui}.hxx;\
	done
	
clean:
	$(RM) -f build/* bin/*