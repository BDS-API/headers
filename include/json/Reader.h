#pragma once



using namespace Json;

class Reader {

public:

    Reader(void);
    Reader(Json::Features const&);
    void parse(std::string const&, Json::Value &, bool);
    void parse(char const*, char const*, Json::Value &, bool);
    void parse(char const*, unsigned long, Json::Value &, bool);
    void parse(std::istream &, Json::Value &, bool);
    void readValue();
    void skipCommentTokens(Json::Reader::Token &);
    void addError(std::string const&, Json::Reader::Token &, char const*);
    void currentValue();
    void readObject(Json::Reader::Token &);
    void readArray(Json::Reader::Token &);
    void decodeNumber(Json::Reader::Token &);
    void decodeString(Json::Reader::Token &);
    void readToken(Json::Reader::Token &);
    void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*);
    void skipSpaces();
    void getNextChar();
    void readString();
    void readComment();
    void readNumber();
    void match(char const*, int);
    void readCStyleComment();
    void readCppStyleComment();
    void addComment(char const*, char const*, Json::CommentPlacement);
    void decodeString(Json::Reader::Token &, std::string &);
    void recoverFromError(Json::Reader::TokenType);
    void addErrorAndRecover(std::string const&, Json::Reader::Token &, Json::Reader::TokenType);
    void decodeDouble(Json::Reader::Token &);
    void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &);
    void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &);
    void getLocationLineAndColumn(char const*, int &, int &)const;
};
