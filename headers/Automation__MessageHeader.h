#pragma once

class Automation::MessageHeader {

public:

    void MessageHeader(void);
    void MessageHeader(std::string const&, Automation::MessagePurpose, int);
    void serialize(void)const;
    void deserialize(Json::Value &, Automation::MessageHeader&);
};
