#ifndef COOKERYBOOK_RECIPE_H
#define COOKERYBOOK_RECIPE_H

#include <iostream>
#include "Ingredients .h"
#include <vector>

class Recipe {
private:
    std::string name;
    std::vector<Ingredient> ingredients;
    std::string making;
public:
    Recipe(std::string name, std::vector<Ingredient> ingredients, std::string making)
            : name(name), ingredients(ingredients), making(making) {}


            std::string GetName() const{
                return name;
    }
    void displayRecipe() const {
        std::cout << "Recipe: " << name << std::endl;
        std::cout << "Ingredients:" << std::endl;
        for (const auto& ingredient : ingredients) {
            std::cout << "- " << ingredient.quantity << " " << ingredient.product << std::endl;
        }
        std::cout << "Making:" << std::endl;
        std::cout << making << std::endl;
    }
};
#endif //COOKERYBOOK_RECIPE_H
