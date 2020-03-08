#pragma once



class LocalConnectivitySystem {

public:

    void getHost(void)const;
    void addHost(LocalConnector &);
    void removeHost(LocalConnector &);
};
