#pragma once



using namespace com::mojang::clacks::protocol;

class Empty : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::Empty::~Empty()
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
    Empty(void);
    void SharedCtor();
    Empty(com::mojang::clacks::protocol::Empty const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Empty const&);
    void CopyFrom(com::mojang::clacks::protocol::Empty const&);
    void Swap(com::mojang::clacks::protocol::Empty*);
    void InternalSwap(com::mojang::clacks::protocol::Empty*);
    void internal_default_instance();
};
