// cpp file for RecipeWithPostInstructions class

#include "recipeWithPostInstructions.h"

RecipeWithPostInstructions::RecipeWithPostInstructions(){
    name = "";
}

RecipeWithPostInstructions::RecipeWithPostInstructions(string name){
    this->name = name;
}

RecipeWithPostInstructions::RecipeWithPostInstructions(string name, vector<string> ingredients){
    this->name = name;
    this->ingredients = ingredients;
}

RecipeWithPostInstructions::RecipeWithPostInstructions(string name, vector<string> ingredients, vector<string> instructions){
    this->name = name;
    this->ingredients = ingredients;
    this->instructions = instructions;
}

RecipeWithPostInstructions::RecipeWithPostInstructions(string name, vector<string> ingredients, vector<string> instructions, vector<string> postInstructions){
    this->name = name;
    this->ingredients = ingredients;
    this->instructions = instructions;
    this->postInstructions = postInstructions;
}

void RecipeWithPostInstructions::setPostInstructions(vector<string> postInstructions){
    this->postInstructions = postInstructions;
}

vector<string> RecipeWithPostInstructions::getPostInstructions(){
    return postInstructions;
}

void RecipeWithPostInstructions::addPostInstruction(string postInstruction){
    postInstructions.push_back(postInstruction);
}

void RecipeWithPostInstructions::printRecipe() const{
    Recipe::printRecipe();
    cout << "Post Instructions: " << endl;
    for (int i = 0; i < postInstructions.size(); i++){
        cout << postInstructions[i] << endl;
    }
}