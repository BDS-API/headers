#pragma once



class PackInstanceId {

public:

    PackInstanceId(PackInstanceId const&);
    PackInstanceId(PackInstanceId&&);
    PackInstanceId(void);
    PackInstanceId(PackIdVersion const&, std::string const&);
};
