#pragma once

#include <string>
#include <ostream>


namespace Json {

    class StyledStreamWriter {

    public:
        ~StyledStreamWriter(); // _ZN4Json18StyledStreamWriterD2Ev
        StyledStreamWriter(std::string); // _ZN4Json18StyledStreamWriterC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void write(std::ostream &, Json::Value const&); // _ZN4Json18StyledStreamWriter5writeERSoRKNS_5ValueE
        void writeCommentBeforeValue(Json::Value const&); // _ZN4Json18StyledStreamWriter23writeCommentBeforeValueERKNS_5ValueE
        void writeValue(Json::Value const&); // _ZN4Json18StyledStreamWriter10writeValueERKNS_5ValueE
        void writeCommentAfterValueOnSameLine(Json::Value const&); // _ZN4Json18StyledStreamWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE
        void pushValue(std::string const&); // _ZN4Json18StyledStreamWriter9pushValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void writeArrayValue(Json::Value const&); // _ZN4Json18StyledStreamWriter15writeArrayValueERKNS_5ValueE
        void writeWithIndent(std::string const&); // _ZN4Json18StyledStreamWriter15writeWithIndentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void indent(); // _ZN4Json18StyledStreamWriter6indentEv
        void unindent(); // _ZN4Json18StyledStreamWriter8unindentEv
        bool isMultineArray(Json::Value const&); // _ZN4Json18StyledStreamWriter14isMultineArrayERKNS_5ValueE
        void writeIndent(); // _ZN4Json18StyledStreamWriter11writeIndentEv
        bool hasCommentForValue(Json::Value const&); // _ZN4Json18StyledStreamWriter18hasCommentForValueERKNS_5ValueE
        void normalizeEOL(std::string const&); // _ZN4Json18StyledStreamWriter12normalizeEOLERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    };
}
