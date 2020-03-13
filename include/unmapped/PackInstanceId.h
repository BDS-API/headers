#pragma once

#include <string>


class PackInstanceId {

public:
    PackInstanceId(PackInstanceId const&); // _ZN14PackInstanceIdC2ERKS_
    ~PackInstanceId(); // _ZN14PackInstanceIdD2Ev
    PackInstanceId(PackInstanceId &&); // _ZN14PackInstanceIdC2EOS_
    PackInstanceId(); // _ZN14PackInstanceIdC2Ev
    PackInstanceId(PackIdVersion const&, std::string const&); // _ZN14PackInstanceIdC2ERK13PackIdVersionRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void operator==(PackInstanceId const&)const; // _ZNK14PackInstanceIdeqERKS_
};
