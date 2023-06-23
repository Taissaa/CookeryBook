#ifndef COOKERYBOOK_INGREDIENTS_H
#define COOKERYBOOK_INGREDIENTS_H

#include <string>

struct Ingredient {
    std::string product;
    int quantity;

    Ingredient(std::string product, int quantity) : product(product), quantity(quantity){}
};

#endif //COOKERYBOOK_INGREDIENTS_H
