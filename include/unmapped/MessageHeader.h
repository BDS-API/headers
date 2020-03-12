#pragma once

#include <string>


namespace Automation {

    class MessageHeader {

    public:
//      MessageHeader(std::string const&, Automation::MessagePurpose, int); //TODO: incomplete function definition
        MessageHeader();
        ~MessageHeader();
        void serialize()const;
        void deserialize(Json::Value &, Automation::MessageHeader &);
    };
}
