#pragma once

#include "../mce/UUID.h"
#include "../core/SingleThreadedLock.h"
#include "./MultiplayerServiceObserver.h"
#include <string>


namespace Social {

class MultiplayerServiceObserver /*Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
    virtual ~MultiplayerServiceObserver();
    virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&);
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&);

    MultiplayerServiceObserver();
};

}