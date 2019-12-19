#pragma once

using namespace com::mojang::clacks::protocol;

class Settings : google::protobuf::Message {

public:
    virtual void com::mojang::clacks::protocol::Settings::~Settings();
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

    void settings_case(void)const;
    void difficultysetting(void)const;
    void cheatssetting(void)const;
    void has_difficultysetting(void)const;
    void has_cheatssetting(void)const;
    void InitAsDefaultInstance(void);
    Settings(void);
    void SharedCtor(void);
    Settings(com::mojang::clacks::protocol::Settings const&);
    void SharedDtor(void);
    void clear_settings(void);
    void descriptor(void);
    void default_instance(void);
    void MergeFrom(com::mojang::clacks::protocol::Settings const&);
    void CopyFrom(com::mojang::clacks::protocol::Settings const&);
    void Swap(com::mojang::clacks::protocol::Settings*);
    void InternalSwap(com::mojang::clacks::protocol::Settings*);
    void clear_has_settings(void);
    void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting);
    void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting);
    void has_settings(void)const;
    void internal_default_instance(void);
    void set_has_difficultysetting(void);
    void set_has_cheatssetting(void);
};
