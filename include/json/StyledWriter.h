#pragma once

#include "Writer.h"
#include <string>


namespace Json {

    class StyledWriter : Json::Writer {

    public:
        ~StyledWriter(); // _ZN4Json12StyledWriterD2Ev
        virtual std::string write(Json::Value const&); // _ZN4Json12StyledWriter5writeB5cxx11ERKNS_5ValueE
        StyledWriter(); // _ZN4Json12StyledWriterC2Ev
        void writeCommentBeforeValue(Json::Value const&); // _ZN4Json12StyledWriter23writeCommentBeforeValueERKNS_5ValueE
        void writeValue(Json::Value const&); // _ZN4Json12StyledWriter10writeValueERKNS_5ValueE
        void writeCommentAfterValueOnSameLine(Json::Value const&); // _ZN4Json12StyledWriter32writeCommentAfterValueOnSameLineERKNS_5ValueE
        void pushValue(std::string const&); // _ZN4Json12StyledWriter9pushValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void writeArrayValue(Json::Value const&); // _ZN4Json12StyledWriter15writeArrayValueERKNS_5ValueE
        void writeWithIndent(std::string const&); // _ZN4Json12StyledWriter15writeWithIndentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void indent(); // _ZN4Json12StyledWriter6indentEv
        void unindent(); // _ZN4Json12StyledWriter8unindentEv
        bool isMultineArray(Json::Value const&); // _ZN4Json12StyledWriter14isMultineArrayERKNS_5ValueE
        void writeIndent(); // _ZN4Json12StyledWriter11writeIndentEv
        bool hasCommentForValue(Json::Value const&); // _ZN4Json12StyledWriter18hasCommentForValueERKNS_5ValueE
        void normalizeEOL(std::string const&); // _ZN4Json12StyledWriter12normalizeEOLERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    };
}
