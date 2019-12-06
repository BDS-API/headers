#pragma once

class ThirdPartyServer {

public:

    void ThirdPartyServer(void);
    void getPort(void)const;
    void setImagePath(Core::Path const&);
    bool isXblRequired(void)const;
};
