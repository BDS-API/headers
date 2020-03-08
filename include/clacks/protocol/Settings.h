#pragma once



using namespace com::mojang::clacks::protocol;

class Settings : google::protobuf::Message {

public:
    virtual com::mojang::clacks::protocol::Settings::~Settings()
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

    void settings_case()const;
    void difficultysetting()const;
    void cheatssetting()const;
    void has_difficultysetting()const;
    void has_cheatssetting()const;
    void InitAsDefaultInstance();
    Settings(void);
    void SharedCtor();
    Settings(com::mojang::clacks::protocol::Settings const&);
    void SharedDtor();
    void clear_settings();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::Settings const&);
    void CopyFrom(com::mojang::clacks::protocol::Settings const&);
    void Swap(com::mojang::clacks::protocol::Settings*);
    void InternalSwap(com::mojang::clacks::protocol::Settings*);
    void clear_has_settings();
    void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting);
    void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting);
    void has_settings()const;
    void internal_default_instance();
    void set_has_difficultysetting();
    void set_has_cheatssetting();
};
