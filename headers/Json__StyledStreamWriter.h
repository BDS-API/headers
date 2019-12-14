#pragma once

class Json::StyledStreamWriter {

public:

    void StyledStreamWriter(std::string);
    void write(std::ostream &, Json::Value const&);
    void writeCommentBeforeValue(Json::Value const&);
    void writeValue(Json::Value const&);
    void writeCommentAfterValueOnSameLine(Json::Value const&);
    void pushValue(std::string const&);
    void writeArrayValue(Json::Value const&);
    void writeWithIndent(std::string const&);
    void indent(void);
    void unindent(void);
    bool isMultineArray(Json::Value const&);
    void writeIndent(void);
    bool hasCommentForValue(Json::Value const&);
    void normalizeEOL(std::string const&);
};
