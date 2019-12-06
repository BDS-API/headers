#pragma once

class com::mojang::clacks::protocol::Empty : google::protobuf::Message {

public:
    virtual ~Empty();
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

    void InitAsDefaultInstance(void);
    void Empty(void);
    void SharedCtor(void);
    void Empty(com::mojang::clacks::protocol::Empty const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::Empty const&);
    void CopyFrom(com::mojang::clacks::protocol::Empty const&);
    void Swap(com::mojang::clacks::protocol::Empty*);
    void InternalSwap(com::mojang::clacks::protocol::Empty*);
    void internal_default_instance(void);
};
