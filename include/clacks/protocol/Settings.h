#pragma once

#include "./Settings.h"


namespace com::mojang::clacks::protocol {

class Settings /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~Settings();
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

    void settings_case()const;
    void difficultysetting()const;
    void cheatssetting()const;
    void has_difficultysetting()const;
    void has_cheatssetting()const;
    void InitAsDefaultInstance();
    Settings();
    void SharedCtor();
    Settings(com::mojang::clacks::protocol::Settings const&);
    void SharedDtor();
    void clear_settings();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Settings const&);
    void CopyFrom(com::mojang::clacks::protocol::Settings const&);
    void Swap(com::mojang::clacks::protocol::Settings *);
    void InternalSwap(com::mojang::clacks::protocol::Settings *);
    void clear_has_settings();
//  void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting); //TODO: incomplete function definition
//  void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting); //TODO: incomplete function definition
    void has_settings()const;
    void internal_default_instance();
    void set_has_difficultysetting();
    void set_has_cheatssetting();
};

}