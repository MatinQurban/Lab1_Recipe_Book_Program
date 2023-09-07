// Header file for RecipeBook class
// Description: This class holds a list of recipes.


#ifndef RECIPEBOOK_H
#define RECIPEBOOK_H

#include "recipeWithPostInstructions.h"

class RecipeBook
{
public:
    RecipeBook();
    RecipeBook(string name);

    void setName(string name);
    string getName();

    void addRecipe(Recipe* recipe);
    void printRecipeBook();

    Recipe* getRecipe(string name);

private:
    string name;
    vector<Recipe*> recipes;
};

#endif