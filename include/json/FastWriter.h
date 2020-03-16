#pragma once

#include <string>
#include "Writer.h"


namespace Json {

    class FastWriter : public Json::Writer {

    public:
        virtual ~FastWriter(); // _ZN4Json10FastWriterD2Ev
        virtual void __fake_function0(); // fake
        virtual std::string write(Json::Value const&); // _ZN4Json10FastWriter5writeB5cxx11ERKNS_5ValueE
        FastWriter(); // _ZN4Json10FastWriterC2Ev
        void enableYAMLCompatibility(); // _ZN4Json10FastWriter23enableYAMLCompatibilityEv
        void writeValue(Json::Value const&); // _ZN4Json10FastWriter10writeValueERKNS_5ValueE
    };
}
