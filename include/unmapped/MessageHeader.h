#pragma once

#include <string>
#include "../json/Value.h"


namespace Automation {

    class MessageHeader {

    public:
        void deserialize(Json::Value &, Automation::MessageHeader &);
        ~MessageHeader();
        void serialize()const;
        MessageHeader();
//      MessageHeader(std::string const&, Automation::MessagePurpose, int); //TODO: incomplete function definition
    };
}
