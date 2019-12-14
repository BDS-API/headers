#pragma once

class PackInstanceId {

public:

    void PackInstanceId(PackInstanceId const&);
    void PackInstanceId(PackInstanceId&&);
    void PackInstanceId(void);
    void PackInstanceId(PackIdVersion const&, std::string const&);
};
