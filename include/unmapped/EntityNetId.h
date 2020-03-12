#pragma once



class EntityNetId {

public:
    void _serverTryGetEntity(EntityRegistry &);
    void getHash()const;
    void _serverGetEntityNetId(EntityContext &);
    void operator==(EntityNetId const&)const;
    void serialize(BinaryStream &)const;
    EntityNetId(unsigned int);
    void deserialize(ReadOnlyBinaryStream &);
};
