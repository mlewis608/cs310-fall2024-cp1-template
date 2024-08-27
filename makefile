# Specifiy the target
all: vote

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
vote: Voter.o
	g++ Voter.o -o vote

# Specify how the object files should be created from source files
Voter.o: Voter.cpp
	g++ -c Voter.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o vote
