#pragma once

class EntityNetId {

public:

    void serialize(BinaryStream &)const;
    void deserialize(ReadOnlyBinaryStream &);
    EntityNetId(unsigned int);
    void getHash(void)const;
    void _serverGetEntityNetId(EntityContext &);
    void _serverTryGetEntity(EntityRegistry &);
};
