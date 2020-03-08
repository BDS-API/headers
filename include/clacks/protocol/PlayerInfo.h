#pragma once



using namespace com::mojang::clacks::protocol;

class PlayerInfo : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::PlayerInfo::~PlayerInfo();
    virtual void New(void)const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear(void);
    virtual void IsInitialized(void)const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong(void)const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize(void)const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata(void)const;

    void mutable_name(void);
    void set_playertype(com::mojang::clacks::protocol::PlayerType);
    void mutable_xuid(void);
    void GetArenaNoVirtual(void)const;
    void InitAsDefaultInstance(void);
    PlayerInfo(void);
    void SharedCtor(void);
    PlayerInfo(com::mojang::clacks::protocol::PlayerInfo const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::PlayerInfo const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerInfo const&);
    void Swap(com::mojang::clacks::protocol::PlayerInfo*);
    void InternalSwap(com::mojang::clacks::protocol::PlayerInfo*);
    void has_xuid(void)const;
    void has_name(void)const;
    void internal_default_instance(void);
    void _internal_xuid(void)const;
    void _internal_name(void)const;
    void playertype(void)const;
    void xuid(void)const;
    void name(void)const;
};
