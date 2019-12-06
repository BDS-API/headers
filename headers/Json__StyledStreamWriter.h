#pragma once

class Json::StyledStreamWriter {

public:

    void StyledStreamWriter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void write(std::ostream &, Json::Value const&);
    void writeCommentBeforeValue(Json::Value const&);
    void writeValue(Json::Value const&);
    void writeCommentAfterValueOnSameLine(Json::Value const&);
    void pushValue(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void writeArrayValue(Json::Value const&);
    void writeWithIndent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void indent(void);
    void unindent(void);
    bool isMultineArray(Json::Value const&);
    void writeIndent(void);
    bool hasCommentForValue(Json::Value const&);
    void normalizeEOL(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
