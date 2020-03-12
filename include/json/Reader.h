#pragma once

#include <string>
#include <istream>


namespace Json {

    class Reader {

    public:
        class ErrorInfo;

        void parse(char const*, unsigned long, Json::Value &, bool);
//      void recoverFromError(Json::Reader::TokenType); //TODO: incomplete function definition
//      void addError(std::string const&, Json::Reader::Token &, char const*); //TODO: incomplete function definition
        void match(char const*, int);
        void parse(std::string const&, Json::Value &, bool);
        void parse(char const*, char const*, Json::Value &, bool);
//      void decodeNumber(Json::Reader::Token &); //TODO: incomplete function definition
        std::string getLocationLineAndColumn(char const*)const;
        void readCStyleComment();
        Reader();
        void readValue();
        void parse(std::istream &, Json::Value &, bool);
//      void skipCommentTokens(Json::Reader::Token &); //TODO: incomplete function definition
        void readComment();
        std::string getFormattedErrorMessages()const;
//      void readObject(Json::Reader::Token &); //TODO: incomplete function definition
//      void decodeString(Json::Reader::Token &); //TODO: incomplete function definition
//      void readToken(Json::Reader::Token &); //TODO: incomplete function definition
        void readString();
        void readNumber();
        Reader(Json::Features const&);
//      void decodeDouble(Json::Reader::Token &); //TODO: incomplete function definition
//      void addComment(char const*, char const*, Json::CommentPlacement); //TODO: incomplete function definition
        std::string getFormatedErrorMessages()const;
//      void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
        void skipSpaces();
//      void decodeString(Json::Reader::Token &, std::string &); //TODO: incomplete function definition
        void readCppStyleComment();
        void currentValue();
//      void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*); //TODO: incomplete function definition
        void getNextChar();
//      void readArray(Json::Reader::Token &); //TODO: incomplete function definition
//      void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition
        void getLocationLineAndColumn(char const*, int &, int &)const;
//      void addErrorAndRecover(std::string const&, Json::Reader::Token &, Json::Reader::TokenType); //TODO: incomplete function definition
        ~Reader();
        class ErrorInfo {

        public:
            ErrorInfo();
            ~ErrorInfo();
            ErrorInfo(Json::Reader::ErrorInfo const&);
        };
    };
}
