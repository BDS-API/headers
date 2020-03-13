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

//  std::string MessagePurposeTypeToString(Automation::MessagePurpose); //TODO: incomplete function definition // _ZN10Automation26MessagePurposeTypeToStringB5cxx11ENS_14MessagePurposeE
    void MessagePurposeTypeFromString(std::string const&); // _ZN10Automation28MessagePurposeTypeFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
