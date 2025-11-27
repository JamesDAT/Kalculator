#ifndef ASTNODE_H
#define ASTNODE_H

#include <memory>
#include <string>

class ASTNode {
public:
    virtual ~ASTNode() = default;
private:

};

enum class BinaryOpType {
    Add,
    Subtract,
    multiply,
    divide
};

class BinaryOp : public ASTNode {
    BinaryOpType Operand;
    std::unique_ptr<ASTNode> LChild;
    std::unique_ptr<ASTNode> RChild;
};

enum class UnaryOpType {
    Sqrt
};

class UnaryOp : public ASTNode {
    UnaryOpType Operand;
    std::unique_ptr<ASTNode> Child;
};

class ExponentOp : public ASTNode {
    std::unique_ptr<ASTNode> Base;
    std::unique_ptr<ASTNode> Power;
};

class FunctionOp : public ASTNode {
    std::string FunctionName;
    std::unique_ptr<ASTNode> Parameter;
};

class Number : public ASTNode {
    int value;
};

#endif // ASTNODE_H
