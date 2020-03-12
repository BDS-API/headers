#pragma once

#include <string>
#include "Value.h"
#include "Writer.h"


namespace Json {

    class StyledWriter : Json::Writer {

    public:
        virtual std::string write(Json::Value const&);
        ~StyledWriter();
        void pushValue(std::string const&);
        void writeCommentBeforeValue(Json::Value const&);
        void writeValue(Json::Value const&);
        void writeCommentAfterValueOnSameLine(Json::Value const&);
        void unindent();
        void indent();
        void writeIndent();
        bool isMultineArray(Json::Value const&);
        void normalizeEOL(std::string const&);
        void writeWithIndent(std::string const&);
        bool hasCommentForValue(Json::Value const&);
        StyledWriter();
        void writeArrayValue(Json::Value const&);
    };
}
