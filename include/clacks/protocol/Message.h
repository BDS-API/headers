#pragma once



using namespace com::mojang::clacks::protocol;

class Message : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::Message::~Message()
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

    void InitAsDefaultInstance();
    Message(void);
    void SharedCtor();
    Message(com::mojang::clacks::protocol::Message const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Message const&);
    void CopyFrom(com::mojang::clacks::protocol::Message const&);
    void Swap(com::mojang::clacks::protocol::Message*);
    void InternalSwap(com::mojang::clacks::protocol::Message*);
    void internal_default_instance();
    void GetArenaNoVirtual()const;
};
