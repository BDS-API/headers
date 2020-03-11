#pragma once

#include <istream>
#include "./Features.h"
#include "./Value.h"
#include <string>


namespace Json {

class Reader {

public:

    Reader();
    Reader(Json::Features const&);
    ~Reader();
    void parse(std::string const&, Json::Value &, bool);
    void parse(char const*, char const*, Json::Value &, bool);
    void parse(char const*, unsigned long, Json::Value &, bool);
    void parse(std::istream &, Json::Value &, bool);
    void readValue();
//  void skipCommentTokens(Json::Reader::Token &); //TODO: incomplete function definition
//  void addError(std::string const&, Json::Reader::Token &, char const*); //TODO: incomplete function definition
    void currentValue();
//  void readObject(Json::Reader::Token &); //TODO: incomplete function definition
//  void readArray(Json::Reader::Token &); //TODO: incomplete function definition
//  void decodeNumber(Json::Reader::Token &); //TODO: incomplete function definition
//  void decodeString(Json::Reader::Token &); //TODO: incomplete function definition
//  void readToken(Json::Reader::Token &); //TODO: incomplete function definition
//  void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*); //TODO: incomplete function definition
    void skipSpaces();
    void getNextChar();
    void readString();
    void readComment();
    void readNumber();
    void match(char const*, int);
    void readCStyleComment();
    void readCppStyleComment();
//  void addComment(char const*, char const*, Json::CommentPlacement); //TODO: incomplete function definition
//  void decodeString(Json::Reader::Token &, std::string &); //TODO: incomplete function definition
//  void recoverFromError(Json::Reader::TokenType); //TODO: incomplete function definition
//  void addErrorAndRecover(std::string const&, Json::Reader::Token &, Json::Reader::TokenType); //TODO: incomplete function definition
//  void decodeDouble(Json::Reader::Token &); //TODO: incomplete function definition
//  void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
//  void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
    void getLocationLineAndColumn(char const*, int &, int &)const;
    std::string getLocationLineAndColumn(char const*)const;
    std::string getFormatedErrorMessages()const;
    std::string getFormattedErrorMessages()const;
};

}