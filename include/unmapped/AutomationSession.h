#pragma once

#include <string>


namespace Automation {

    namespace AutomationSession {

        void connect(std::string const&); // _ZN10Automation17AutomationSession7connectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        bool isReady(); // _ZN10Automation17AutomationSession7isReadyEv
        bool isConnecting(); // _ZN10Automation17AutomationSession12isConnectingEv
    };
}
