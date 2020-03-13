#pragma once

#include <string>


namespace Automation {

    class MessageHeader {

    public:
        ~MessageHeader(); // _ZN10Automation13MessageHeaderD2Ev
        MessageHeader(); // _ZN10Automation13MessageHeaderC2Ev
//      MessageHeader(std::string const&, Automation::MessagePurpose, int); //TODO: incomplete function definition // _ZN10Automation13MessageHeaderC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_14MessagePurposeEi
        void serialize()const; // _ZNK10Automation13MessageHeader9serializeEv
        void deserialize(Json::Value &, Automation::MessageHeader &); // _ZN10Automation13MessageHeader11deserializeERN4Json5ValueERS0_
    };
}
