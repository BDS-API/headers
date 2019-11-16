#pragma once

class ServerLocator {

    virtual void ~ServerLocator();
    virtual void ~ServerLocator();
    virtual void announceServer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, GameType, int, int, bool);
    virtual void stopAnnouncingServer(void);
    virtual void findServers(int, int);
    virtual void addCustomServer(AsynchronousIPResolver const&, int);
    virtual void addCustomServer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void stopFindingServers(void);
    virtual void getServerList(void)const;
    virtual void clearServerList(void);
    virtual void isIPv4Supported(void)const;
    virtual void isIPv6Supported(void)const;
    virtual void setHostGUID(std::function<RakNet::RakNetGUID ()(void)>);
    virtual void getPingTimeForGUID(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void checkCanConnectToCustomServerAsync(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, std::function<void ()(bool)>);
}
