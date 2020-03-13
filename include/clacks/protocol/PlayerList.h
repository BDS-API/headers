#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class PlayerList /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~PlayerList(); // _ZN3com6mojang6clacks8protocol10PlayerListD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol10PlayerList3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerList3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol10PlayerList5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol10PlayerList13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerList27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol10PlayerList12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol10PlayerList24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol10PlayerList13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol10PlayerList39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerList8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol10PlayerList9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol10PlayerList13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol10PlayerList11GetMetadataEv
                    void add_player(); // _ZN3com6mojang6clacks8protocol10PlayerList10add_playerEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol10PlayerList21InitAsDefaultInstanceEv
                    PlayerList(); // _ZN3com6mojang6clacks8protocol10PlayerListC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol10PlayerList10SharedCtorEv
                    PlayerList(com::mojang::clacks::protocol::PlayerList const&); // _ZN3com6mojang6clacks8protocol10PlayerListC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol10PlayerList10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol10PlayerList10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerList16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::PlayerList const&); // _ZN3com6mojang6clacks8protocol10PlayerList9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::PlayerList const&); // _ZN3com6mojang6clacks8protocol10PlayerList8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::PlayerList *); // _ZN3com6mojang6clacks8protocol10PlayerList4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::PlayerList *); // _ZN3com6mojang6clacks8protocol10PlayerList12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol10PlayerList25internal_default_instanceEv
                    void player_size()const; // _ZNK3com6mojang6clacks8protocol10PlayerList11player_sizeEv
                    void player(int)const; // _ZNK3com6mojang6clacks8protocol10PlayerList6playerEi
                };
            }
        }
    }
}
