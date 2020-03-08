#pragma once



using namespace com::mojang::clacks::protocol;

class Xuid : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::Xuid::~Xuid()
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

    void set_value(std::string const&);
    void InitAsDefaultInstance();
    Xuid(void);
    void SharedCtor();
    Xuid(com::mojang::clacks::protocol::Xuid const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Xuid const&);
    void CopyFrom(com::mojang::clacks::protocol::Xuid const&);
    void Swap(com::mojang::clacks::protocol::Xuid*);
    void InternalSwap(com::mojang::clacks::protocol::Xuid*);
    void internal_default_instance();
    void GetArenaNoVirtual()const;
};
