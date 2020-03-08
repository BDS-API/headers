#pragma once



using namespace Json;

class FastWriter : Json::Writer {

public:
    Json::FastWriter::~FastWriter()
    virtual void write(Json::Value const&);

    FastWriter(void);
    void enableYAMLCompatibility();
    void writeValue(Json::Value const&);
};
