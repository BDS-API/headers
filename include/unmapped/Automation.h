#pragma once

#include <string>


namespace Automation {

    static long Header;
    static long Body;
    static long StatusCode;
    static long StatusMsg;
    static long RequestId;
    static long MsgPurpose;
    static long VersionData;

//  std::string MessagePurposeTypeToString(Automation::MessagePurpose); //TODO: incomplete function definition
    void MessagePurposeTypeFromString(std::string const&);
};
