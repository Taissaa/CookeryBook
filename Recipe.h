#ifndef COOKERYBOOK_RECIPE_H
#define COOKERYBOOK_RECIPE_H

#include "Ingredients .h"
#include <vector>

class Recipe {
    std::string name;
    std::vector<Ingredient>ingredients;
    std::string making; 
};


#endif //COOKERYBOOK_RECIPE_H
