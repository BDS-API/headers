#pragma once

class UpdateAttributesPacket : Packet {

public:
    virtual ~UpdateAttributesPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateAttributesPacket(void);
    void UpdateAttributesPacket(Actor const&, std::vector<AttributeInstanceHandle, std::allocator<AttributeInstanceHandle>> const&);
    void getRuntimeId(void)const;
    void getAttributeData(void)const;
};
