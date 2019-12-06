#pragma once

class com::mojang::clacks::protocol::LevelFileAndSize : google::protobuf::Message {

public:
    virtual ~LevelFileAndSize();
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

    void set_value(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&);
    void InitAsDefaultInstance(void);
    void LevelFileAndSize(void);
    void SharedCtor(void);
    void LevelFileAndSize(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void SharedDtor(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void CopyFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
    void Swap(com::mojang::clacks::protocol::LevelFileAndSize*);
    void InternalSwap(com::mojang::clacks::protocol::LevelFileAndSize*);
    void internal_default_instance(void);
    void GetArenaNoVirtual(void)const;
};
