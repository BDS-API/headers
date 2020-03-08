#pragma once

#include "../core/Path"


class ThirdPartyServer {

public:

    ThirdPartyServer(void);
    void getPort()const;
    void setImagePath(Core::Path const&);
    bool isXblRequired()const;
};
