UIC = uic
MKDIR = mkdir
CXX = g++
LD = ld

CXXFLAGS = -std=c++11 -lstdc++ -fPIC

DIR_BIN = bin
DIR_BUILD = build
DIR_LIB = $(DIR_BUILD)/lib
DIR_INC = include
DIR_SRC = src

LIBS = 

PATH_INC = $(DIR_INC)
INC_EXPR = $(foreach dir, $(PATH_INC),-I$(dir)) \
    $(foreach lib, $(LIBS),$(shell pkg-config --cflags $(lib))) \
    $(shell wx-config --cxxflags)

LIB_INC = $(DIR_LIB)
LIBS_NATIVE = 
LDLIBS =  $(foreach lib, $(LIBS),$(shell pkg-config --libs $(lib))) \
    $(foreach dir, $(LIB_INC), -L$(dir)) \
    $(foreach lib, $(LIBS_NATIVE),-l$(lib)) \
    $(shell wx-config --libs)

OBJECTS = $(DIR_BUILD)/wpvcs/main.o \
    $(DIR_BUILD)/wpvcs/app.o \
    $(DIR_BUILD)/wpvcs/vcs/exporter/msword.o \
    $(DIR_BUILD)/wpvcs/vcs/importer/msword.o \
    $(DIR_BUILD)/pattack/vcs/repository.o \
    $(DIR_BUILD)/pattack/vcs/importer.o \
    $(DIR_BUILD)/pattack/vcs/exporter.o

all: libraries standalone

libraries: $(foreach lib, $(LIBS_NATIVE), $(DIR_LIB)/lib$(lib).so)

standalone: $(DIR_BIN)/wpvcs
	
$(DIR_BIN)/wpvcs: $(OBJECTS)
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(LDFLAGS) $(LDLIBS) -o $@ $^
	
$(DIR_BUILD)/%.o: $(DIR_SRC)/%.cxx
	$(MKDIR) -p $$(dirname $@)
	$(CXX) $(CXXFLAGS) $(INC_EXPR) -c $< -o $@

$(DIR_LIB)/lib%.so: $(DIR_BUILD)/%.o
	$(MKDIR) -p $$(dirname $@)
	$(CXX) -shared -o $@ $<
	
view: include/wpvcs/view/ui/*.ui
	for view in $^;\
	do\
	    dirName=$$(dirname $$view);\
	    baseName=$$(basename $$view);\
	    $(UIC) $$view -o $$dirName/../raw/$${baseName%.ui}.hxx;\
	done
	
clean:
	$(RM) -r build/* bin/*