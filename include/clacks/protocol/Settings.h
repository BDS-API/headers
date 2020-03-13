#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Settings /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    class SettingsUnion;

                    ~Settings(); // _ZN3com6mojang6clacks8protocol8SettingsD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol8Settings3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol8Settings3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol8Settings5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol8Settings13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Settings27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol8Settings12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol8Settings24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol8Settings13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol8Settings39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Settings8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Settings9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol8Settings13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol8Settings11GetMetadataEv
                    void settings_case()const; // _ZNK3com6mojang6clacks8protocol8Settings13settings_caseEv
                    void difficultysetting()const; // _ZNK3com6mojang6clacks8protocol8Settings17difficultysettingEv
                    void cheatssetting()const; // _ZNK3com6mojang6clacks8protocol8Settings13cheatssettingEv
                    void has_difficultysetting()const; // _ZNK3com6mojang6clacks8protocol8Settings21has_difficultysettingEv
                    void has_cheatssetting()const; // _ZNK3com6mojang6clacks8protocol8Settings17has_cheatssettingEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol8Settings21InitAsDefaultInstanceEv
                    Settings(); // _ZN3com6mojang6clacks8protocol8SettingsC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol8Settings10SharedCtorEv
                    Settings(com::mojang::clacks::protocol::Settings const&); // _ZN3com6mojang6clacks8protocol8SettingsC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol8Settings10SharedDtorEv
                    void clear_settings(); // _ZN3com6mojang6clacks8protocol8Settings14clear_settingsEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol8Settings10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol8Settings16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::Settings const&); // _ZN3com6mojang6clacks8protocol8Settings9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::Settings const&); // _ZN3com6mojang6clacks8protocol8Settings8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::Settings *); // _ZN3com6mojang6clacks8protocol8Settings4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::Settings *); // _ZN3com6mojang6clacks8protocol8Settings12InternalSwapEPS3_
                    void clear_has_settings(); // _ZN3com6mojang6clacks8protocol8Settings18clear_has_settingsEv
//                  void set_difficultysetting(com::mojang::clacks::protocol::DifficultySetting); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Settings21set_difficultysettingENS2_17DifficultySettingE
//                  void set_cheatssetting(com::mojang::clacks::protocol::CheatsSetting); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol8Settings17set_cheatssettingENS2_13CheatsSettingE
                    void has_settings()const; // _ZNK3com6mojang6clacks8protocol8Settings12has_settingsEv
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol8Settings25internal_default_instanceEv
                    void set_has_difficultysetting(); // _ZN3com6mojang6clacks8protocol8Settings25set_has_difficultysettingEv
                    void set_has_cheatssetting(); // _ZN3com6mojang6clacks8protocol8Settings21set_has_cheatssettingEv
                    class SettingsUnion {

                    public:
                        SettingsUnion(); // _ZN3com6mojang6clacks8protocol8Settings13SettingsUnionC2Ev
                    };
                };
            }
        }
    }
}
