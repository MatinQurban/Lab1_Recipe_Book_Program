// Header file for recipeWithPostInstructions.cpp
// Description: This class is a subclass of Recipe.
//              It adds a postInstructions member variable to the Recipe class.


#ifndef RECIPEWITHPOSTINSTRUCTIONS_H
#define RECIPEWITHPOSTINSTRUCTIONS_H

#include "recipe.h"

class RecipeWithPostInstructions : public Recipe
{
public:
    RecipeWithPostInstructions();
    RecipeWithPostInstructions(string name);
    RecipeWithPostInstructions(string name, vector<string> ingredients);
    RecipeWithPostInstructions(string name, vector<string> ingredients, vector<string> instructions);
    RecipeWithPostInstructions(string name, vector<string> ingredients, vector<string> instructions, vector<string> postInstructions);

    void setPostInstructions(vector<string> postInstructions);
    vector<string> getPostInstructions();

    void addPostInstruction(string postInstruction);

    void printRecipe();

private:
    vector<string> postInstructions;

};



#endif