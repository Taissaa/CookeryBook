#ifndef COOKERYBOOK_RECIPE_H
#define COOKERYBOOK_RECIPE_H

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


};
#endif //COOKERYBOOK_RECIPE_H
