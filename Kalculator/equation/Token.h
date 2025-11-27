#ifndef TOKEN_H
#define TOKEN_H

#include <string>

enum class TokenType {
    Number,
    Plus,
    Minus,
    Multiply,
    Divide,
    Left_Paranthesis,
    Right_Paranthesis,
    Character,
    Dot,
    Equals
};

struct Token {
    TokenType tokenType;
    std::string tokenValue;
};

#endif // TOKEN_H
