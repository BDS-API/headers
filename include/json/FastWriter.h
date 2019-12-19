#pragma once

using namespace Json;

class FastWriter : Json::Writer {

public:
    virtual void Json::FastWriter::~FastWriter();
    virtual void write[abi:cxx11](Json::Value const&);

    FastWriter(void);
    void enableYAMLCompatibility(void);
    void writeValue(Json::Value const&);
};
