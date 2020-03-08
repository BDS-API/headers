#pragma once

#include "../bedrock/io/BinaryStream"
#include "../bedrock/io/ReadOnlyBinaryStream"


class EntityNetId {

public:

    void serialize(BinaryStream &)const;
    void deserialize(ReadOnlyBinaryStream &);
    EntityNetId(unsigned int);
    void getHash()const;
    void _serverGetEntityNetId(EntityContext &);
    void _serverTryGetEntity(EntityRegistry &);
};
