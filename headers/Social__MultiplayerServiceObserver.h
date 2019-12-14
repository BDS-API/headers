#pragma once

class Social::MultiplayerServiceObserver : Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock> {

public:
    virtual ~MultiplayerServiceObserver();
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&);

    void MultiplayerServiceObserver(void);
};
