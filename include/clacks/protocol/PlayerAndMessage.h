#pragma once



using namespace com::mojang::clacks::protocol;

class PlayerAndMessage : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::PlayerAndMessage::~PlayerAndMessage()
    virtual void New()const;
    virtual void New(google::protobuf::Arena *)const;
    virtual void Clear();
    virtual void IsInitialized()const;
    virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *);
    virtual void ByteSizeLong()const;
    virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const;
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
    virtual void CopyFrom(google::protobuf::Message const&);
    virtual void MergeFrom(google::protobuf::Message const&);
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void message()const;
    void xuid()const;
    void InitAsDefaultInstance();
    PlayerAndMessage(void);
    void SharedCtor();
    PlayerAndMessage(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerAndMessage const&);
    void Swap(com::mojang::clacks::protocol::PlayerAndMessage*);
    void InternalSwap(com::mojang::clacks::protocol::PlayerAndMessage*);
    void has_xuid()const;
    void has_message()const;
    void internal_default_instance();
    void GetArenaNoVirtual()const;
    void mutable_xuid();
    void mutable_message();
    void _internal_xuid()const;
    void _internal_message()const;
};
