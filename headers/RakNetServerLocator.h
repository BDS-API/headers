#pragma once

class RakNetServerLocator : ServerLocator {

    virtual void RakNet~RakNetServerLocator();
    virtual void RakNet~RakNetServerLocator();
    virtual void RakNetannounceServer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, GameType, int, int, bool);
    virtual void RakNetstopAnnouncingServer(void);
    virtual void RakNetfindServers(int, int);
    virtual void RakNetaddCustomServer(AsynchronousIPResolver const&, int);
    virtual void RakNetaddCustomServer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void RakNetstopFindingServers(void);
    virtual void RakNetgetServerList(void)const;
    virtual void RakNetclearServerList(void);
    virtual void RakNetisIPv4Supported(void)const;
    virtual void RakNetisIPv6Supported(void)const;
    virtual void RakNetsetHostGUID(std::function<RakNet::RakNetGUID ()(void)>);
    virtual void RakNetgetPingTimeForGUID(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void RakNetcheckCanConnectToCustomServerAsync(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::function<void ()(bool)>);
}
