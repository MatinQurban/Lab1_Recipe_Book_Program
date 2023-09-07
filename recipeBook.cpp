// cpp source code for Recipe Book class

#include "recipeBook.h"

RecipeBook::RecipeBook(){
    name = "";
}

RecipeBook::RecipeBook(string name){
    this->name = name;
}

void RecipeBook::setName(string name){
    this->name = name;
}

string RecipeBook::getName(){
    return name;
}

void RecipeBook::addRecipe(Recipe* recipe){
    recipes.push_back(recipe);
}

void RecipeBook::printRecipeBook(){
    cout << "Recipe Book: \n" << name << endl;
    for (int i = 0; i < recipes.size(); i++){
        recipes[i]->printRecipe();
    }
}

Recipe* RecipeBook::getRecipe(string name){
    for (int i = 0; i < recipes.size(); i++){
        if (recipes[i]->getName() == name){
            return recipes[i];
        }
    }
    return NULL;
}

