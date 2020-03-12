#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveStateResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void Clear();
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void New()const;
                    virtual void ByteSizeLong()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    virtual void SetCachedSize(int)const;
                    ~SaveStateResult();
                    virtual void GetCachedSize()const;
                    SaveStateResult();
                    void InternalSwap(com::mojang::clacks::protocol::SaveStateResult *);
                    void Swap(com::mojang::clacks::protocol::SaveStateResult *);
                    void savestate()const;
                    void descriptor();
//                  void set_savestate(com::mojang::clacks::protocol::SaveState); //TODO: incomplete function definition
                    void SharedDtor();
                    SaveStateResult(com::mojang::clacks::protocol::SaveStateResult const&);
                    void InitAsDefaultInstance();
                    void internal_default_instance();
                    void CopyFrom(com::mojang::clacks::protocol::SaveStateResult const&);
                    void default_instance();
                    void MergeFrom(com::mojang::clacks::protocol::SaveStateResult const&);
                    void SharedCtor();
                };
            }
        }
    }
}
