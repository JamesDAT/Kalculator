#ifndef TREEBUILDER_H
#define TREEBUILDER_H

#include <QVector>
#include <memory>
#include <string_view>
#include "ASTNode.h"

class TreeBuilder
{
public:
    TreeBuilder();
    ~TreeBuilder();

    void InsertNode(const char character);
    void ParseEquation(const std::string_view equation);
private:
    QVector<std::unique_ptr<ASTNode>> m_baseNodes;
};

#endif // TREEBUILDER_H
