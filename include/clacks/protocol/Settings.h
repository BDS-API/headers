#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Settings /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class SettingsUnion;

                    virtual bool IsInitialized()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void SetCachedSize(int)const;
                    virtual void GetMetadata()const;
                    ~Settings();
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetCachedSize()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void New()const;
                    void internal_default_instance();
                    void has_cheatssetting()const;
                    void has_settings()const;
                    void SharedDtor();
                    void clear_settings();
                    void set_has_difficultysetting();
                    void set_has_cheatssetting();
                    void MergeFrom(com::mojang::clacks::protocol::Settings const&);
                    void InitAsDefaultInstance();
//                  void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting); //TODO: incomplete function definition
                    void descriptor();
                    void difficultysetting()const;
                    Settings(com::mojang::clacks::protocol::Settings const&);
                    Settings();
                    void cheatssetting()const;
                    void clear_has_settings();
                    void CopyFrom(com::mojang::clacks::protocol::Settings const&);
                    void has_difficultysetting()const;
                    void InternalSwap(com::mojang::clacks::protocol::Settings *);
                    void settings_case()const;
//                  void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting); //TODO: incomplete function definition
                    void SharedCtor();
                    void default_instance();
                    void Swap(com::mojang::clacks::protocol::Settings *);
                    class SettingsUnion {

                    public:
                        SettingsUnion();
                    };
                };
            }
        }
    }
}
