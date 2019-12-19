#pragma once

using namespace Automation;

class MessageHeader {

public:

    MessageHeader(void);
    MessageHeader(std::string const&, Automation::MessagePurpose, int);
    void serialize(void)const;
    void deserialize(Json::Value &, Automation::MessageHeader&);
};
