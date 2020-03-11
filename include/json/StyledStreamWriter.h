#pragma once

#include "./Value.h"
#include <ostream>
#include <string>


namespace Json {

class StyledStreamWriter {

public:

    ~StyledStreamWriter();
    StyledStreamWriter(std::string);
    void write(std::ostream &, Json::Value const&);
    void writeCommentBeforeValue(Json::Value const&);
    void writeValue(Json::Value const&);
    void writeCommentAfterValueOnSameLine(Json::Value const&);
    void pushValue(std::string const&);
    void writeArrayValue(Json::Value const&);
    void writeWithIndent(std::string const&);
    void indent();
    void unindent();
    bool isMultineArray(Json::Value const&);
    void writeIndent();
    bool hasCommentForValue(Json::Value const&);
    void normalizeEOL(std::string const&);
};

}