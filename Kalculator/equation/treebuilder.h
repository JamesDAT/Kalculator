#ifndef TREEBUILDER_H
#define TREEBUILDER_H

#include <QVector>
#include <memory>
#include <string_view>
#include "ASTNode.h"
#include "equationlexer.h"

class TreeBuilder
{
public:
    TreeBuilder();
    ~TreeBuilder();

    void CreateTree(const std::string_view equation);

private:
    QVector<std::unique_ptr<ASTNode>> m_baseNodes;

    EquationLexer m_lexer;
};

#endif // TREEBUILDER_H
