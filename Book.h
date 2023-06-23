#ifndef COOKERYBOOK_BOOK_H
#define COOKERYBOOK_BOOK_H

#include "Recipe.h"

class Book {
private:
    std::vector<Recipe> recipes;

public:
    void addRecipe(Recipe recipe) {
        recipes.push_back(recipe);
    }

    void displayCookbook() const {
        std::cout << "Cookery Book" << std::endl;
        for (const auto& recipe : recipes) {
            recipe.displayRecipe();
            std::cout << std::endl;
        }
    }
};


#endif //COOKERYBOOK_BOOK_H
