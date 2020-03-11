#pragma once

#include "./Empty.h"


namespace com::mojang::clacks::protocol {

class Empty /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~Empty();
    virtual void New()const;
//  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
    virtual void Clear();
    virtual bool IsInitialized()const;
//  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
    virtual void ByteSizeLong()const;
//  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void InitAsDefaultInstance();
    Empty();
    void SharedCtor();
    Empty(com::mojang::clacks::protocol::Empty const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Empty const&);
    void CopyFrom(com::mojang::clacks::protocol::Empty const&);
    void Swap(com::mojang::clacks::protocol::Empty *);
    void InternalSwap(com::mojang::clacks::protocol::Empty *);
    void internal_default_instance();
};

}