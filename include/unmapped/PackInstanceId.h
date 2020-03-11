#pragma once

#include "./PackInstanceId.h"
#include "./PackIdVersion.h"
#include <string>


class PackInstanceId {

public:

    PackInstanceId(PackInstanceId const&);
    ~PackInstanceId();
    PackInstanceId(PackInstanceId &&);
    PackInstanceId();
    PackInstanceId(PackIdVersion const&, std::string const&);
    void operator==(PackInstanceId const&)const;
};
