#pragma once



namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class SaveQueryResult /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual void GetCachedSize()const;
                    virtual void New()const;
                    ~SaveQueryResult();
                    virtual bool IsInitialized()const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void Clear();
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void GetMetadata()const;
                    virtual void ByteSizeLong()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    SaveQueryResult(com::mojang::clacks::protocol::SaveQueryResult const&);
                    void default_instance();
                    void files(int)const;
                    void files_size()const;
                    void CopyFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
                    void internal_default_instance();
                    void InitAsDefaultInstance();
                    void descriptor();
                    void MergeFrom(com::mojang::clacks::protocol::SaveQueryResult const&);
                    void SharedCtor();
                    void add_files();
                    void Swap(com::mojang::clacks::protocol::SaveQueryResult *);
                    void SharedDtor();
                    SaveQueryResult();
                    void InternalSwap(com::mojang::clacks::protocol::SaveQueryResult *);
                };
            }
        }
    }
}
