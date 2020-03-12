#pragma once

#include <string>
#include <ostream>


namespace Json {

    class StyledStreamWriter {

    public:
        void normalizeEOL(std::string const&);
        void unindent();
        bool hasCommentForValue(Json::Value const&);
        void writeCommentAfterValueOnSameLine(Json::Value const&);
        StyledStreamWriter(std::string);
        void writeArrayValue(Json::Value const&);
        void indent();
        bool isMultineArray(Json::Value const&);
        void writeWithIndent(std::string const&);
        void writeValue(Json::Value const&);
        void writeIndent();
        void pushValue(std::string const&);
        void writeCommentBeforeValue(Json::Value const&);
        ~StyledStreamWriter();
        void write(std::ostream &, Json::Value const&);
    };
}
