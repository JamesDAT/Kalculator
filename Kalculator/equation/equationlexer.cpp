#include "equationlexer.h"

#include <string>

EquationLexer::EquationLexer() = default;
EquationLexer::~EquationLexer() = default;

void EquationLexer::LexEquation(const std::string_view equation) {
    m_tokens = QVector<Token>{};
    std::size_t index = 0;

    while(index < equation.length()) {
        if(std::isblank(equation[index])) {
            index++;
            continue;
        }
        else if(std::isdigit(equation[index])) {
            std::string value;
            while(index < equation.length() && std::isdigit(equation[index])) {
                value += equation[index];
                index++;
            }

            m_tokens.push_back({
                .tokenType = TokenType::Number,
                .tokenValue = value
            });
        }
        else if(std::isalpha(equation[index])) {
            std::string value;
            while(index < equation.length() && std::isalpha(equation[index])) {
                value += equation[index];
                index++;
            }

            m_tokens.push_back({
                .tokenType = TokenType::Character,
                .tokenValue = value
            });
        }
        else {
            const char character = equation[index];
            if(character == '+') {
                m_tokens.push_back({
                    .tokenType = TokenType::Plus
                });
            }
            else if(character == '-') {
                m_tokens.push_back({
                    .tokenType = TokenType::Minus
                });
            }
            else if(character == '*') {
                m_tokens.push_back({
                    .tokenType = TokenType::Multiply
                });
            }
            else if(character == '/') {
                m_tokens.push_back({
                    .tokenType = TokenType::Divide
                });
            }
            else if(character == '(') {
                m_tokens.push_back({
                    .tokenType = TokenType::Left_Paranthesis
                });
            }
            else if(character == ')') {
                m_tokens.push_back({
                    .tokenType = TokenType::Right_Paranthesis
                });
            }
            else if(character == '=') {
                m_tokens.push_back({
                    .tokenType = TokenType::Equals
                });
            }
            else {
                std::string errorString = "Invalid Token: ";
                errorString += character;
                throw std::runtime_error(errorString);
            }

            index++;
        }
    }
}
