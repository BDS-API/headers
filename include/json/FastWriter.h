#pragma once

#include <string>
#include "Writer.h"


namespace Json {

    class FastWriter : Json::Writer {

    public:
        ~FastWriter();
        virtual std::string write(Json::Value const&);
        void enableYAMLCompatibility();
        void writeValue(Json::Value const&);
        FastWriter();
    };
}
