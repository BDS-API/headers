#pragma once



class ActorBlockSyncMessage {

public:

    ActorBlockSyncMessage(void);
    ActorBlockSyncMessage(ActorUniqueID const&, ActorBlockSyncMessage::MessageId const&);
};
