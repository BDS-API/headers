#pragma once

#include "../json/Value"


using namespace Automation;

class MessageHeader {

public:

    MessageHeader(void);
    MessageHeader(std::string const&, Automation::MessagePurpose, int);
    void serialize()const;
    void deserialize(Json::Value &, Automation::MessageHeader&);
};
