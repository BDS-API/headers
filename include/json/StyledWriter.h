#pragma once



using namespace Json;

class StyledWriter : Json::Writer {

public:
    virtual Json::StyledWriter::~StyledWriter()
    virtual void write(Json::Value const&);

    StyledWriter(void);
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
