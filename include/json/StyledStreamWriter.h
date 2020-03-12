#pragma once

#include "Value.h"
#include <ostream>
#include <string>


namespace Json {

    class StyledStreamWriter {

    public:
        void writeCommentBeforeValue(Json::Value const&);
        void write(std::ostream &, Json::Value const&);
        void writeWithIndent(std::string const&);
        bool isMultineArray(Json::Value const&);
        void writeIndent();
        void unindent();
        bool hasCommentForValue(Json::Value const&);
        void normalizeEOL(std::string const&);
        void pushValue(std::string const&);
        void indent();
        void writeValue(Json::Value const&);
        void writeCommentAfterValueOnSameLine(Json::Value const&);
        StyledStreamWriter(std::string);
        void writeArrayValue(Json::Value const&);
        ~StyledStreamWriter();
    };
}
