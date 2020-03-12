#pragma once

#include "EntityRegistry.h"
#include "../bedrock/io/BinaryStream.h"
#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "EntityContext.h"


class EntityNetId {

public:
    EntityNetId(unsigned int);
    void serialize(BinaryStream &)const;
    void getHash()const;
    void operator==(EntityNetId const&)const;
    void deserialize(ReadOnlyBinaryStream &);
    void _serverTryGetEntity(EntityRegistry &);
    void _serverGetEntityNetId(EntityContext &);
};
