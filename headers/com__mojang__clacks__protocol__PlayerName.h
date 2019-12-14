#pragma once

class com::mojang::clacks::protocol::PlayerName : google::protobuf::Message {

public:
    virtual ~PlayerName();
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

    void set_value(std::string const&);
    void InitAsDefaultInstance(void);
    void PlayerName(void);
    void SharedCtor(void);
    void PlayerName(com::mojang::clacks::protocol::PlayerName const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::PlayerName const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerName const&);
    void Swap(com::mojang::clacks::protocol::PlayerName*);
    void InternalSwap(com::mojang::clacks::protocol::PlayerName*);
    void internal_default_instance(void);
    void GetArenaNoVirtual(void)const;
};
