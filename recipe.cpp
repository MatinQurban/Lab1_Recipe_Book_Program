// Src.cpp file for Recipe class

#include "recipe.h"

Recipe::Recipe(){
    name = "";
}

Recipe::Recipe(string name){
    this->name = name;
}

Recipe::Recipe(string name, vector<string> ingredients){
    this->name = name;
    this->ingredients = ingredients;
}

Recipe::Recipe(string name, vector<string> ingredients, vector<string> instructions){
    this->name = name;
    this->ingredients = ingredients;
    this->instructions = instructions;
}

void Recipe::setName(string name){
    this->name = name;
}

void Recipe::setIngredients(vector<string> ingredients){
    this->ingredients = ingredients;
}

void Recipe::setInstructions(vector<string> instructions){
    this->instructions = instructions;
}

void Recipe::addIngredient(string ingredient){
    ingredients.push_back(ingredient);
}

void Recipe::addInstruction(string instruction){
    instructions.push_back(instruction);
}

void Recipe::placeInstruction(string instruction, int index){
    instructions.insert(instructions.begin() + index, instruction);
}

void Recipe::removeIngredient(string ingredient){
    for (int i = 0; i < ingredients.size(); i++){
        if (ingredients[i] == ingredient){
            ingredients.erase(ingredients.begin() + i);
        }
    }
}

void Recipe::removeInstruction(string instruction){
    for (int i = 0; i < instructions.size(); i++){
        if (instructions[i] == instruction){
            instructions.erase(instructions.begin() + i);
        }
    }
}

string Recipe::getName(){
    return name;
}

vector<string> Recipe::getIngredients(){
    return ingredients;
}

vector<string> Recipe::getInstructions(){
    return instructions;
}

void Recipe::printRecipe(){
    cout << "Recipe: " << name << endl;
    cout << "Ingredients: " << endl;
    for (int i = 0; i < ingredients.size(); i++){
        cout << ingredients[i] << endl;
    }
    cout << "Instructions: " << endl;
    for (int i = 0; i < instructions.size(); i++){
        cout << instructions[i] << endl;
    }
}
