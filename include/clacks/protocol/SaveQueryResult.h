#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveQueryResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual bool IsInitialized()const;
                    ~SaveQueryResult();
                    virtual void SetCachedSize(int)const;
                    virtual void Clear();
                    virtual void GetCachedSize()const;
                    virtual void ByteSizeLong()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
                    virtual void New()const;
                    void default_instance();
                    void files_size()const;
                    void add_files();
                    void SharedCtor();
                    void CopyFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
                    SaveQueryResult();
                    SaveQueryResult(com::mojang::clacks::protocol::SaveQueryResult const&);
                    void InitAsDefaultInstance();
                    void SharedDtor();
                    void Swap(com::mojang::clacks::protocol::SaveQueryResult *);
                    void descriptor();
                    void InternalSwap(com::mojang::clacks::protocol::SaveQueryResult *);
                    void internal_default_instance();
                    void MergeFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
                    void files(int)const;
                };
            }
        }
    }
}
