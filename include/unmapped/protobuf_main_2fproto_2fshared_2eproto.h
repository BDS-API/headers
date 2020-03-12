#pragma once

#include <string>


namespace protobuf_main_2fproto_2fshared_2eproto {

    void protobuf_AssignDescriptorsOnce();
    void InitDefaults();
    void AddDescriptors();
    void protobuf_RegisterTypes(std::string const&);
    void AddDescriptorsImpl();
    void protobuf_AssignDescriptors();
};
