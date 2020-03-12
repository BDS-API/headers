#pragma once

#include "Value.h"
#include "Writer.h"


namespace Json {

    class FastWriter : Json::Writer {

    public:
        ~FastWriter();
        virtual std::string write(Json::Value const&);
        void writeValue(Json::Value const&);
        void enableYAMLCompatibility();
        FastWriter();
    };
}
