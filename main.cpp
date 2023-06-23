#include "Book.h"
int main() {

    Ingredient ingredient1("Milk", 200);
    Ingredient ingredient2("Sugar", 50);
    Ingredient ingredient3("Toast", 300);
    Ingredient ingredient4("Egg", 3);

    Ingredient ingredient5("Flour", 400);
    Ingredient ingredient6("Yeast", 20);
    Ingredient ingredient7("Salt", 7);

    Recipe recipe1("french toast", {ingredient1, ingredient2, ingredient3, ingredient4}, "1. Miks all\n2. Make fry");
    Recipe recipe2("bread", {ingredient1, ingredient5, ingredient6, ingredient7}, "Miks all\n2.Pour into the modl\n3.Bake");

    Book cookbook;
    cookbook.addRecipe(recipe1);
    cookbook.addRecipe(recipe2);

    cookbook.displayCookbook();


    return 0;
}
