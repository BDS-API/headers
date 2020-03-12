#pragma once

#include "Features.h"
#include <istream>
#include "Value.h"
#include <string>


namespace Json {

    class Reader {

    public:
        class ErrorInfo;

//      void decodeString(Json::Reader::Token &); //TODO: incomplete function definition
//      void addComment(char const*, char const*, Json::CommentPlacement); //TODO: incomplete function definition
        void currentValue();
        void parse(char const*, char const*, Json::Value &, bool);
//      void decodeString(Json::Reader::Token &, std::string &); //TODO: incomplete function definition
        void match(char const*, int);
        Reader(Json::Features const&);
        Reader();
        void getNextChar();
        void getLocationLineAndColumn(char const*, int &, int &)const;
        ~Reader();
        std::string getFormattedErrorMessages()const;
//      void readArray(Json::Reader::Token &); //TODO: incomplete function definition
//      void decodeDouble(Json::Reader::Token &); //TODO: incomplete function definition
//      void readToken(Json::Reader::Token &); //TODO: incomplete function definition
//      void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
        void readCStyleComment();
        std::string getLocationLineAndColumn(char const*)const;
        void parse(std::string const&, Json::Value &, bool);
//      void addErrorAndRecover(std::string const&, Json::Reader::Token &, Json::Reader::TokenType); //TODO: incomplete function definition
        std::string getFormatedErrorMessages()const;
        void parse(char const*, unsigned long, Json::Value &, bool);
//      void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*); //TODO: incomplete function definition
        void readCppStyleComment();
        void readValue();
//      void skipCommentTokens(Json::Reader::Token &); //TODO: incomplete function definition
        void parse(std::istream &, Json::Value &, bool);
        void skipSpaces();
        void readComment();
//      void recoverFromError(Json::Reader::TokenType); //TODO: incomplete function definition
//      void readObject(Json::Reader::Token &); //TODO: incomplete function definition
        void readString();
        void readNumber();
//      void addError(std::string const&, Json::Reader::Token &, char const*); //TODO: incomplete function definition
//      void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
//      void decodeNumber(Json::Reader::Token &); //TODO: incomplete function definition
        class ErrorInfo {

        public:
            ErrorInfo(Json::Reader::ErrorInfo const&);
            ErrorInfo();
            ~ErrorInfo();
        };
    };
}
