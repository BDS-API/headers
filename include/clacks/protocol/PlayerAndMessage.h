#pragma once



using namespace com::mojang::clacks::protocol;

class PlayerAndMessage : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::PlayerAndMessage::~PlayerAndMessage();
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

    void message(void)const;
    void xuid(void)const;
    void InitAsDefaultInstance(void);
    PlayerAndMessage(void);
    void SharedCtor(void);
    PlayerAndMessage(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void Swap(com::mojang::clacks::protocol::PlayerAndMessage*);
    void InternalSwap(com::mojang::clacks::protocol::PlayerAndMessage*);
    void has_xuid(void)const;
    void has_message(void)const;
    void internal_default_instance(void);
    void GetArenaNoVirtual(void)const;
    void mutable_xuid(void);
    void mutable_message(void);
    void _internal_xuid(void)const;
    void _internal_message(void)const;
};
