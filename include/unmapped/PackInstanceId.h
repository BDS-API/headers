#pragma once

#include <string>
#include "PackIdVersion.h"


class PackInstanceId {

public:
    PackInstanceId(PackInstanceId const&);
    void operator==(PackInstanceId const&)const;
    PackInstanceId();
    ~PackInstanceId();
    PackInstanceId(PackIdVersion const&, std::string const&);
    PackInstanceId(PackInstanceId &&);
};
