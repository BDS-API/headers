#pragma once

using namespace Social;

class MultiplayerServiceObserver : Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock> {

public:
    virtual void Social::MultiplayerServiceObserver::~MultiplayerServiceObserver();
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&);

    MultiplayerServiceObserver(void);
};
