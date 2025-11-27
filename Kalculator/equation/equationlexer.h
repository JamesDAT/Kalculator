#ifndef EQUATIONLEXER_H
#define EQUATIONLEXER_H

#include <string_view>
#include <QVector>
#include <expected>
#include "Token.h"

class EquationLexer
{
public:
    EquationLexer();
    ~EquationLexer();

    void LexEquation(const std::string_view equation);

private:
    QVector<Token> m_tokens;
};

#endif // EQUATIONLEXER_H
