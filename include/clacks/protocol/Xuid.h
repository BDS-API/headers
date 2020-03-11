#pragma once

#include "./Xuid.h"
#include <string>


namespace com::mojang::clacks::protocol {

class Xuid /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~Xuid();
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

    std::string value()const;
    void set_value(std::string const&);
    void InitAsDefaultInstance();
    Xuid();
    void SharedCtor();
    Xuid(com::mojang::clacks::protocol::Xuid const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Xuid const&);
    void CopyFrom(com::mojang::clacks::protocol::Xuid const&);
    void Swap(com::mojang::clacks::protocol::Xuid *);
    void InternalSwap(com::mojang::clacks::protocol::Xuid *);
    void internal_default_instance();
    std::string mutable_value();
    void GetArenaNoVirtual()const;
};

}