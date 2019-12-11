#pragma once

class Social::MultiplayerServiceObserver : Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock> {

public:
    virtual ~MultiplayerServiceObserver();
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void MultiplayerServiceObserver(void);
};
