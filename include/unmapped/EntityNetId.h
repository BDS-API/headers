#pragma once



class EntityNetId {

public:
    void serialize(BinaryStream &)const; // _ZNK11EntityNetId9serializeER12BinaryStream
    void deserialize(ReadOnlyBinaryStream &); // _ZN11EntityNetId11deserializeER20ReadOnlyBinaryStream
    EntityNetId(unsigned int); // _ZN11EntityNetIdC2Ej
    void getHash()const; // _ZNK11EntityNetId7getHashEv
    void operator==(EntityNetId const&)const; // _ZNK11EntityNetIdeqERKS_
    void _serverGetEntityNetId(EntityContext &); // _ZN11EntityNetId21_serverGetEntityNetIdER13EntityContext
    void _serverTryGetEntity(EntityRegistry &); // _ZN11EntityNetId19_serverTryGetEntityER14EntityRegistry
};
