#pragma once

#include "./PlayerName.h"
#include <string>


namespace com::mojang::clacks::protocol {

class PlayerName /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~PlayerName();
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

    void set_value(std::string const&);
    void InitAsDefaultInstance();
    PlayerName();
    void SharedCtor();
    PlayerName(com::mojang::clacks::protocol::PlayerName const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::PlayerName const&);
    void CopyFrom(com::mojang::clacks::protocol::PlayerName const&);
    void Swap(com::mojang::clacks::protocol::PlayerName *);
    void InternalSwap(com::mojang::clacks::protocol::PlayerName *);
    std::string value()const;
    void internal_default_instance();
    std::string mutable_value();
    void GetArenaNoVirtual()const;
};

}