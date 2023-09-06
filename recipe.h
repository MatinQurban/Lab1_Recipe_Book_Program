// Header file for recipe class
// Description: This class holds recipes that have instructions, ingredients, and a name.
// The instructions are stored in a vector of strings. The ingredients are stored in a vector of strings.


#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Recipe
{
public:
    Recipe();
    Recipe(string name);
    Recipe(string name, vector<string> ingredients);
    Recipe(string name, vector<string> ingredients, vector<string> instructions);

    void setName(string name);
    void setIngredients(vector<string> ingredients);
    void setInstructions(vector<string> instructions);

    void addIngredient(string ingredient);
    void addInstruction(string instruction);

    string getName();
    vector<string> getIngredients();
    vector<string> getInstructions();

    void printRecipe();

protected:
    string name;
    vector<string> ingredients;
    vector<string> instructions;
};

#endif