#pragma once

class ActorBlockSyncMessage {

public:

    void ActorBlockSyncMessage(void);
    void ActorBlockSyncMessage(ActorUniqueID const&, ActorBlockSyncMessage::MessageId const&);
};
