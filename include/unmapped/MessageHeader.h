#pragma once

#include "../json/Value.h"
#include "./MessageHeader.h"
#include <string>


namespace Automation {

class MessageHeader {

public:

    ~MessageHeader();
    MessageHeader();
//  MessageHeader(std::string const&, Automation::MessagePurpose, int); //TODO: incomplete function definition
    void serialize()const;
    void deserialize(Json::Value &, Automation::MessageHeader &);
};

}