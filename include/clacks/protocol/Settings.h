#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Settings /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class SettingsUnion;

                    virtual void New()const;
                    virtual bool IsInitialized()const;
                    virtual void ByteSizeLong()const;
                    virtual void GetCachedSize()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    ~Settings();
                    virtual void GetMetadata()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void Clear();
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
                    void clear_settings();
                    void MergeFrom(com::mojang::clacks::protocol::Settings const&);
                    void InitAsDefaultInstance();
                    void SharedCtor();
                    void descriptor();
//                  void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting); //TODO: incomplete function definition
                    void difficultysetting()const;
                    void InternalSwap(com::mojang::clacks::protocol::Settings *);
                    void set_has_difficultysetting();
                    void settings_case()const;
                    void has_difficultysetting()const;
                    void has_settings()const;
                    void has_cheatssetting()const;
                    void internal_default_instance();
                    void clear_has_settings();
                    void default_instance();
                    void CopyFrom(com::mojang::clacks::protocol::Settings const&);
//                  void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting); //TODO: incomplete function definition
                    void set_has_cheatssetting();
                    Settings(com::mojang::clacks::protocol::Settings const&);
                    Settings();
                    void SharedDtor();
                    void Swap(com::mojang::clacks::protocol::Settings *);
                    void cheatssetting()const;
                    class SettingsUnion {

                    public:
                        SettingsUnion();
                    };
                };
            }
        }
    }
}
