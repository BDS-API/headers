#pragma once

#include "./LocalConnector.h"


class LocalConnectivitySystem {

public:

    void getHost()const;
    void addHost(LocalConnector &);
    void removeHost(LocalConnector &);
};
