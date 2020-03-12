#pragma once

#include <string>


class PackInstanceId {

public:
    void operator==(PackInstanceId const&)const;
    PackInstanceId(PackIdVersion const&, std::string const&);
    ~PackInstanceId();
    PackInstanceId();
    PackInstanceId(PackInstanceId const&);
    PackInstanceId(PackInstanceId &&);
};
