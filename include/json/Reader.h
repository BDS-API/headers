#pragma once

#include <string>
#include <istream>


namespace Json {

    class Reader {

    public:
        class ErrorInfo;

        Reader(); // _ZN4Json6ReaderC2Ev
        Reader(Json::Features const&); // _ZN4Json6ReaderC2ERKNS_8FeaturesE
        ~Reader(); // _ZN4Json6ReaderD2Ev
        void parse(std::string const&, Json::Value &, bool); // _ZN4Json6Reader5parseERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS_5ValueEb
        void parse(char const*, char const*, Json::Value &, bool); // _ZN4Json6Reader5parseEPKcS2_RNS_5ValueEb
        void parse(char const*, unsigned long, Json::Value &, bool); // _ZN4Json6Reader5parseEPKcmRNS_5ValueEb
        void parse(std::istream &, Json::Value &, bool); // _ZN4Json6Reader5parseERSiRNS_5ValueEb
        void readValue(); // _ZN4Json6Reader9readValueEv
//      void skipCommentTokens(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader17skipCommentTokensERNS0_5TokenE
//      void addError(std::string const&, Json::Reader::Token &, char const*); //TODO: incomplete function definition // _ZN4Json6Reader8addErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_5TokenEPKc
        void currentValue(); // _ZN4Json6Reader12currentValueEv
//      void readObject(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader10readObjectERNS0_5TokenE
//      void readArray(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader9readArrayERNS0_5TokenE
//      void decodeNumber(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader12decodeNumberERNS0_5TokenE
//      void decodeString(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader12decodeStringERNS0_5TokenE
//      void readToken(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader9readTokenERNS0_5TokenE
//      void expectToken(Json::Reader::TokenType, Json::Reader::Token &, char const*); //TODO: incomplete function definition // _ZN4Json6Reader11expectTokenENS0_9TokenTypeERNS0_5TokenEPKc
        void skipSpaces(); // _ZN4Json6Reader10skipSpacesEv
        void getNextChar(); // _ZN4Json6Reader11getNextCharEv
        void readString(); // _ZN4Json6Reader10readStringEv
        void readComment(); // _ZN4Json6Reader11readCommentEv
        void readNumber(); // _ZN4Json6Reader10readNumberEv
        void match(char const*, int); // _ZN4Json6Reader5matchEPKci
        void readCStyleComment(); // _ZN4Json6Reader17readCStyleCommentEv
        void readCppStyleComment(); // _ZN4Json6Reader19readCppStyleCommentEv
//      void addComment(char const*, char const*, Json::CommentPlacement); //TODO: incomplete function definition // _ZN4Json6Reader10addCommentEPKcS2_NS_16CommentPlacementE
//      void decodeString(Json::Reader::Token &, std::string &); //TODO: incomplete function definition // _ZN4Json6Reader12decodeStringERNS0_5TokenERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//      void recoverFromError(Json::Reader::TokenType); //TODO: incomplete function definition // _ZN4Json6Reader16recoverFromErrorENS0_9TokenTypeE
//      void addErrorAndRecover(std::string const&, Json::Reader::Token &, Json::Reader::TokenType); //TODO: incomplete function definition // _ZN4Json6Reader18addErrorAndRecoverERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS0_5TokenENS0_9TokenTypeE
//      void decodeDouble(Json::Reader::Token &); //TODO: incomplete function definition // _ZN4Json6Reader12decodeDoubleERNS0_5TokenE
//      void decodeUnicodeCodePoint(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition // _ZN4Json6Reader22decodeUnicodeCodePointERNS0_5TokenERPKcS4_Rj
//      void decodeUnicodeEscapeSequence(Json::Reader::Token &, char const*&, char const*, unsigned int &); //TODO: incomplete function definition // _ZN4Json6Reader27decodeUnicodeEscapeSequenceERNS0_5TokenERPKcS4_Rj
        void getLocationLineAndColumn(char const*, int &, int &)const; // _ZNK4Json6Reader24getLocationLineAndColumnEPKcRiS3_
        std::string getLocationLineAndColumn(char const*)const; // _ZNK4Json6Reader24getLocationLineAndColumnB5cxx11EPKc
        std::string getFormatedErrorMessages()const; // _ZNK4Json6Reader24getFormatedErrorMessagesB5cxx11Ev
        std::string getFormattedErrorMessages()const; // _ZNK4Json6Reader25getFormattedErrorMessagesB5cxx11Ev
        class ErrorInfo {

        public:
            ErrorInfo(); // _ZN4Json6Reader9ErrorInfoC2Ev
            ~ErrorInfo(); // _ZN4Json6Reader9ErrorInfoD2Ev
            ErrorInfo(Json::Reader::ErrorInfo const&); // _ZN4Json6Reader9ErrorInfoC2ERKS1_
        };
    };
}
