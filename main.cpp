#include "Book.h"
int main() {

    Ingredient ingredient1("Milk", 200);
    Ingredient ingredient2("Sugar", 50);
    Ingredient ingredient3("Toast", 300);
    Ingredient ingredient4("Egg", 3);

    Recipe recipe1("french toast", {ingredient1, ingredient2, ingredient3, ingredient4}, "1. Miks all\n2. Make fry");

    Book cookbook;
    cookbook.addRecipe(recipe1);
    
    cookbook.displayCookbook();


    return 0;
}
