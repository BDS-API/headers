#pragma once

#include "./Value.h"
#include "./Writer.h"
#include <string>


namespace Json {

class FastWriter : Json::Writer {

public:
    virtual ~FastWriter();
    virtual std::string write(Json::Value const&);

    FastWriter();
    void enableYAMLCompatibility();
    void writeValue(Json::Value const&);
};

}