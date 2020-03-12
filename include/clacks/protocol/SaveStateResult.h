#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveStateResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    ~SaveStateResult();
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void New()const;
                    virtual void ByteSizeLong()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void GetMetadata()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    virtual void GetCachedSize()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  void set_savestate(com::mojang::clacks::protocol::SaveState); //TODO: incomplete function definition
                    void savestate()const;
                    void default_instance();
                    void InitAsDefaultInstance();
                    void MergeFrom(com::mojang::clacks::protocol::SaveStateResult const&);
                    void CopyFrom(com::mojang::clacks::protocol::SaveStateResult const&);
                    SaveStateResult(com::mojang::clacks::protocol::SaveStateResult const&);
                    void descriptor();
                    void SharedDtor();
                    void internal_default_instance();
                    void Swap(com::mojang::clacks::protocol::SaveStateResult *);
                    SaveStateResult();
                    void InternalSwap(com::mojang::clacks::protocol::SaveStateResult *);
                    void SharedCtor();
                };
            }
        }
    }
}
