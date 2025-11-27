#include "treebuilder.h"

TreeBuilder::TreeBuilder() = default;
TreeBuilder::~TreeBuilder() = default;

void TreeBuilder::InsertNode(const char character) {

}

void TreeBuilder::ParseEquation(const std::string_view equation) {

    // iterate equation checking for each type
    for(std::size_t i = 0; i < equation.length(); ++i) {
        if(std::isblank(equation[i])) {
            // 'blank'
            continue;
        }
        else if(std::isalnum(equation[i])) {
            // 'a-z', '0-9'
            if(std::isdigit(equation[i])) {
                // '0-9'
            }
            else {
                // 'a-z'
            }
        }
        else {
            // 'symbol'
        }
    }
}
