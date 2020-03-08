#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../bedrock/io/BinaryStream"


class EntityNetId {

public:

    void serialize(BinaryStream &)const;
    void deserialize(ReadOnlyBinaryStream &);
    EntityNetId(unsigned int);
    void getHash()const;
    void _serverGetEntityNetId(EntityContext &);
    void _serverTryGetEntity(EntityRegistry &);
};
