#pragma once

class Social::MultiplayerServiceObserver : Core::Observer_ltSocial::MultiplayerServiceObserver_Core::SingleThreadedLock_ge {

    virtual void Social::MultiplayerServiceObserver::~MultiplayerServiceObserver();
    virtual void Social::MultiplayerServiceObserver::~MultiplayerServiceObserver();
    virtual void Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
