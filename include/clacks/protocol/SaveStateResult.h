#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveStateResult /*public google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual ~SaveStateResult(); // _ZN3com6mojang6clacks8protocol15SaveStateResultD2Ev
                    virtual void __fake_function0(); // fake
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult3NewEv
                    virtual void New__incomplete1(long *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol15SaveStateResult3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol15SaveStateResult5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult13IsInitializedEv
                    virtual void MergePartialFromCodedStream__incomplete0(long *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveStateResult27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult12ByteSizeLongEv
                    virtual void SerializeWithCachedSizes__incomplete0(long *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol15SaveStateResult24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult39InternalSerializeWithCachedSizesToArrayEbPh
                    virtual void CopyFrom__incomplete1(long const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveStateResult8CopyFromERKN6google8protobuf7MessageE
                    virtual void MergeFrom__incomplete1(long const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveStateResult9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult11GetMetadataEv
//                    void set_savestate(long); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveStateResult13set_savestateENS2_9SaveStateE
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol15SaveStateResult21InitAsDefaultInstanceEv
                    SaveStateResult(); // _ZN3com6mojang6clacks8protocol15SaveStateResultC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol15SaveStateResult10SharedCtorEv
                    SaveStateResult(com::mojang::clacks::protocol::SaveStateResult const&); // _ZN3com6mojang6clacks8protocol15SaveStateResultC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol15SaveStateResult10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol15SaveStateResult10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol15SaveStateResult16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::SaveStateResult const&); // _ZN3com6mojang6clacks8protocol15SaveStateResult9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::SaveStateResult const&); // _ZN3com6mojang6clacks8protocol15SaveStateResult8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::SaveStateResult *); // _ZN3com6mojang6clacks8protocol15SaveStateResult4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::SaveStateResult *); // _ZN3com6mojang6clacks8protocol15SaveStateResult12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol15SaveStateResult25internal_default_instanceEv
                    void savestate()const; // _ZNK3com6mojang6clacks8protocol15SaveStateResult9savestateEv
                };
            }
        }
    }
}
