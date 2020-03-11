#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream.h"
#include "./EntityNetId.h"
#include "./EntityRegistry.h"
#include "./EntityContext.h"
#include "../bedrock/io/BinaryStream.h"


class EntityNetId {

public:

    void serialize(BinaryStream &)const;
    void deserialize(ReadOnlyBinaryStream &);
    EntityNetId(unsigned int);
    void getHash()const;
    void operator==(EntityNetId const&)const;
    void _serverGetEntityNetId(EntityContext &);
    void _serverTryGetEntity(EntityRegistry &);
};
