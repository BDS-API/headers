#pragma once

#include <string>
#include "Writer.h"


namespace Json {

    class StyledWriter : Json::Writer {

    public:
        virtual std::string write(Json::Value const&);
        ~StyledWriter();
        void writeWithIndent(std::string const&);
        void writeCommentAfterValueOnSameLine(Json::Value const&);
        void writeValue(Json::Value const&);
        void writeIndent();
        void normalizeEOL(std::string const&);
        bool hasCommentForValue(Json::Value const&);
        void writeArrayValue(Json::Value const&);
        bool isMultineArray(Json::Value const&);
        void indent();
        StyledWriter();
        void pushValue(std::string const&);
        void writeCommentBeforeValue(Json::Value const&);
        void unindent();
    };
}
