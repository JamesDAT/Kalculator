#include "treebuilder.h"

TreeBuilder::TreeBuilder() = default;
TreeBuilder::~TreeBuilder() = default;

void TreeBuilder::CreateTree(const std::string_view equation) {
    m_baseNodes = QVector<std::unique_ptr<ASTNode>>{}; // will free the entire tree
    try {
        m_lexer.LexEquation(equation);
    }
    catch (std::runtime_error& err) {

    }

}

