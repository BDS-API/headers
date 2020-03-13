#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Empty /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~Empty(); // _ZN3com6mojang6clacks8protocol5EmptyD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol5Empty3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol5Empty3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol5Empty5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol5Empty13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol5Empty27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol5Empty12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol5Empty24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol5Empty13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol5Empty39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol5Empty8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol5Empty9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol5Empty13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol5Empty11GetMetadataEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol5Empty21InitAsDefaultInstanceEv
                    Empty(); // _ZN3com6mojang6clacks8protocol5EmptyC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol5Empty10SharedCtorEv
                    Empty(com::mojang::clacks::protocol::Empty const&); // _ZN3com6mojang6clacks8protocol5EmptyC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol5Empty10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol5Empty10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol5Empty16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::Empty const&); // _ZN3com6mojang6clacks8protocol5Empty9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::Empty const&); // _ZN3com6mojang6clacks8protocol5Empty8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::Empty *); // _ZN3com6mojang6clacks8protocol5Empty4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::Empty *); // _ZN3com6mojang6clacks8protocol5Empty12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol5Empty25internal_default_instanceEv
                };
            }
        }
    }
}
