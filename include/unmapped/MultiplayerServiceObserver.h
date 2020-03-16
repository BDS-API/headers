#pragma once

#include <string>


namespace Social {

    class MultiplayerServiceObserver /*public Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

    public:
        virtual ~MultiplayerServiceObserver(); // _ZN6Social26MultiplayerServiceObserverD2Ev
        virtual void __fake_function0(); // fake
        virtual void onInvalidPlayerJoinedLobby(mce::UUID const&, std::string const&); // _ZN6Social26MultiplayerServiceObserver26onInvalidPlayerJoinedLobbyERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&); // _ZN6Social26MultiplayerServiceObserver40onUserDisconnectedBecauseConcurrentLoginERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        MultiplayerServiceObserver(); // _ZN6Social26MultiplayerServiceObserverC2Ev
    };
}
