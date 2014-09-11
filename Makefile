UIC = uic
MKDIR = mkdir
CXX = g++
LD = ld

PATH_INC = include
INC_EXPR = $(foreach dir, $(PATH_INC),-I $(dir)) $(LIBS) $(shell wx-config --cxxflags)
CXXFLAGS = -std=c++11 -lstdc++ -fPIC
LDLIBS = $(shell wx-config --libs)

all: bin/wpvcs
	
bin/wpvcs: build/wpvcs/wpvcs.o build/wpvcs/app.o build/wpvcs/view/welcome.o
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(LDFLAGS) $(LDLIBS) -o $@ $^
	
build/wpvcs/wpvcs.o: src/wpvcs/main.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@

build/wpvcs/app.o: src/wpvcs/app.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@

build/wpvcs/view/welcome.o: src/wpvcs/view/welcome.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@
	
view: include/wpvcs/view/ui/*.ui
	for view in $^;\
	do\
	    dirName=$$(dirname $$view);\
	    baseName=$$(basename $$view);\
	    $(UIC) $$view -o $$dirName/../raw/$${baseName%.ui}.hxx;\
	done

gtk:
	$(CXX)  $(CXXFLAGS) $(INC_EXPR) -Wall -g -o bin/main src/wpvcs/main.cxx -export-dynamic `pkg-config --cflags --libs gtk+-3.0`
	
clean:
	$(RM) -f build/* bin/*