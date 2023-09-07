// Main file to test classes:
/* 
Functionality to demonstrate:
1. Create a recipe book

2. Add recipes to the book

3. Make sure some recipes have post instructions

4. Print the recipe book

5. Edit the details of a recipe (by finding it) and then print the book again. Confirm the details of the recipe changed. 
*/


#include "recipeBook.h"

int main(){
    // 1. Create a recipe book
    RecipeBook* recipeBook = new RecipeBook("My Recipe Book");

    // 2. Add recipes to the book
    Recipe* recipe1 = new Recipe("Pancakes");
    recipe1->addIngredient("Flour");
    recipe1->addIngredient("Eggs");
    recipe1->addIngredient("Milk");
    recipe1->addIngredient("Butter");
    recipe1->addInstruction("Mix ingredients together");
    recipe1->addInstruction("Cook on pan");
    recipe1->addInstruction("Flip pancake");
    recipeBook->addRecipe(recipe1);

    Recipe* recipe2 = new Recipe("French Toast");
    recipe2->addIngredient("Bread");
    recipe2->addIngredient("Eggs");
    recipe2->addIngredient("Milk");
    recipe2->addIngredient("Butter");
    recipe2->addInstruction("Mix ingredients together");
    recipe2->addInstruction("Cook on pan");
    recipe2->addInstruction("Flip bread");
    recipeBook->addRecipe(recipe2);

    Recipe* recipe3 = new Recipe("Scrambled Eggs");
    recipe3->addIngredient("Eggs");
    recipe3->addIngredient("Milk");
    recipe3->addIngredient("Butter");
    recipe3->addInstruction("Mix ingredients together");
    recipe3->addInstruction("Cook on pan");
    recipeBook->addRecipe(recipe3);


    // 3. Make sure some recipes have post instructions
    RecipeWithPostInstructions* recipe4 = new RecipeWithPostInstructions("Apple Pie");
    recipe4->addIngredient("Apples");
    recipe4->addIngredient("Sugar");
    recipe4->addIngredient("Flour");
    recipe4->addIngredient("Butter");
    recipe4->addInstruction("Mix ingredients together");
    recipe4->addInstruction("Cook in oven");
    recipe4->addInstruction("Take out of oven");
    recipe4->addPostInstruction("Let cool");
    recipe4->addPostInstruction("Eat & Enjoy");
    recipeBook->addRecipe(recipe4);

    RecipeWithPostInstructions* recipe5 = new RecipeWithPostInstructions("Chocolate Chip Cookies");
    recipe5->addIngredient("Chocolate Chips");
    recipe5->addIngredient("Sugar");
    recipe5->addIngredient("Cookie dough");
    recipe5->addInstruction("Preheat oven to 350 degrees");
    recipe5->addInstruction("Mix ingredients together");
    recipe5->addInstruction("Bake in oven for 10 minutes");
    recipe5->addInstruction("Take out of oven");
    recipe5->addPostInstruction("Let cool");
    recipe5->addPostInstruction("Eat & Enjoy");
    recipeBook->addRecipe(recipe5);


    // 4. Print the recipe book
    recipeBook->printRecipeBook();
}