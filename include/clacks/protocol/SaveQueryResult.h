#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveQueryResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~SaveQueryResult(); // _ZN3com6mojang6clacks8protocol15SaveQueryResultD2Ev
                    virtual void New()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult3NewEv
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol15SaveQueryResult3NewEPN6google8protobuf5ArenaE
                    virtual void Clear(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult5ClearEv
                    virtual bool IsInitialized()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult13IsInitializedEv
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveQueryResult27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
                    virtual void ByteSizeLong()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult12ByteSizeLongEv
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition // _ZNK3com6mojang6clacks8protocol15SaveQueryResult24SerializeWithCachedSizesEPN6google8protobuf2io17CodedOutputStreamE
                    virtual void GetCachedSize()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult13GetCachedSizeEv
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult39InternalSerializeWithCachedSizesToArrayEbPh
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveQueryResult8CopyFromERKN6google8protobuf7MessageE
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition // _ZN3com6mojang6clacks8protocol15SaveQueryResult9MergeFromERKN6google8protobuf7MessageE
                    virtual void SetCachedSize(int)const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult13SetCachedSizeEi
                    virtual void GetMetadata()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult11GetMetadataEv
                    void add_files(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult9add_filesEv
                    void InitAsDefaultInstance(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult21InitAsDefaultInstanceEv
                    SaveQueryResult(); // _ZN3com6mojang6clacks8protocol15SaveQueryResultC2Ev
                    void SharedCtor(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult10SharedCtorEv
                    SaveQueryResult(com::mojang::clacks::protocol::SaveQueryResult const&); // _ZN3com6mojang6clacks8protocol15SaveQueryResultC2ERKS3_
                    void SharedDtor(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult10SharedDtorEv
                    void descriptor(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult10descriptorEv
                    void default_instance(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult16default_instanceEv
                    void MergeFrom(com::mojang::clacks::protocol::SaveQueryResult const&); // _ZN3com6mojang6clacks8protocol15SaveQueryResult9MergeFromERKS3_
                    void CopyFrom(com::mojang::clacks::protocol::SaveQueryResult const&); // _ZN3com6mojang6clacks8protocol15SaveQueryResult8CopyFromERKS3_
                    void Swap(com::mojang::clacks::protocol::SaveQueryResult *); // _ZN3com6mojang6clacks8protocol15SaveQueryResult4SwapEPS3_
                    void InternalSwap(com::mojang::clacks::protocol::SaveQueryResult *); // _ZN3com6mojang6clacks8protocol15SaveQueryResult12InternalSwapEPS3_
                    void internal_default_instance(); // _ZN3com6mojang6clacks8protocol15SaveQueryResult25internal_default_instanceEv
                    void files_size()const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult10files_sizeEv
                    void files(int)const; // _ZNK3com6mojang6clacks8protocol15SaveQueryResult5filesEi
                };
            }
        }
    }
}
