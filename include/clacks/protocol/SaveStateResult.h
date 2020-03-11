#pragma once

#include "./SaveStateResult.h"


namespace com::mojang::clacks::protocol {

class SaveStateResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~SaveStateResult();
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

//  void set_savestate(com::mojang::clacks::protocol::SaveState); //TODO: incomplete function definition
    void InitAsDefaultInstance();
    SaveStateResult();
    void SharedCtor();
    SaveStateResult(com::mojang::clacks::protocol::SaveStateResult const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::SaveStateResult const&);
    void CopyFrom(com::mojang::clacks::protocol::SaveStateResult const&);
    void Swap(com::mojang::clacks::protocol::SaveStateResult *);
    void InternalSwap(com::mojang::clacks::protocol::SaveStateResult *);
    void internal_default_instance();
    void savestate()const;
};

}