CC = g++
TARGET = main
OBJS = recipe.o recipeBook.o recipeWithPostInstructions.o

all: $(TARGET)

$(TARGET): $(OBJS) main.cpp recipe.h recipeBook.h recipeWithPostInstructions.h recipe.cpp recipeBook.cpp recipeWithPostInstructions.cpp
	$(CC) main.cpp -o $(TARGET) $(OBJS)

$(OBJS): %.o: %.cpp %.h
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) *.o 

