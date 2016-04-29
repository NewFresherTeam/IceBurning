// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GamePlay.proto

#ifndef PROTOBUF_GamePlay_2eproto__INCLUDED
#define PROTOBUF_GamePlay_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GamePlay_2eproto();
void protobuf_AssignDesc_GamePlay_2eproto();
void protobuf_ShutdownFile_GamePlay_2eproto();

class PBFrameMessage;
class CSFrameSyncRequest;
class CSFrameSyncResponse;
class CSBackRoomListRequest;
class CSBackRoomListResponse;

// ===================================================================

class PBFrameMessage : public ::google::protobuf::Message {
 public:
  PBFrameMessage();
  virtual ~PBFrameMessage();

  PBFrameMessage(const PBFrameMessage& from);

  inline PBFrameMessage& operator=(const PBFrameMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PBFrameMessage& default_instance();

  void Swap(PBFrameMessage* other);

  // implements Message ----------------------------------------------

  PBFrameMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBFrameMessage& from);
  void MergeFrom(const PBFrameMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 uin = 1;
  inline bool has_uin() const;
  inline void clear_uin();
  static const int kUinFieldNumber = 1;
  inline ::google::protobuf::int32 uin() const;
  inline void set_uin(::google::protobuf::int32 value);

  // optional string operation = 2;
  inline bool has_operation() const;
  inline void clear_operation();
  static const int kOperationFieldNumber = 2;
  inline const ::std::string& operation() const;
  inline void set_operation(const ::std::string& value);
  inline void set_operation(const char* value);
  inline void set_operation(const char* value, size_t size);
  inline ::std::string* mutable_operation();
  inline ::std::string* release_operation();
  inline void set_allocated_operation(::std::string* operation);

  // @@protoc_insertion_point(class_scope:PBFrameMessage)
 private:
  inline void set_has_uin();
  inline void clear_has_uin();
  inline void set_has_operation();
  inline void clear_has_operation();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* operation_;
  ::google::protobuf::int32 uin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_GamePlay_2eproto();
  friend void protobuf_AssignDesc_GamePlay_2eproto();
  friend void protobuf_ShutdownFile_GamePlay_2eproto();

  void InitAsDefaultInstance();
  static PBFrameMessage* default_instance_;
};
// -------------------------------------------------------------------

class CSFrameSyncRequest : public ::google::protobuf::Message {
 public:
  CSFrameSyncRequest();
  virtual ~CSFrameSyncRequest();

  CSFrameSyncRequest(const CSFrameSyncRequest& from);

  inline CSFrameSyncRequest& operator=(const CSFrameSyncRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSFrameSyncRequest& default_instance();

  void Swap(CSFrameSyncRequest* other);

  // implements Message ----------------------------------------------

  CSFrameSyncRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSFrameSyncRequest& from);
  void MergeFrom(const CSFrameSyncRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .PBFrameMessage step = 1;
  inline bool has_step() const;
  inline void clear_step();
  static const int kStepFieldNumber = 1;
  inline const ::PBFrameMessage& step() const;
  inline ::PBFrameMessage* mutable_step();
  inline ::PBFrameMessage* release_step();
  inline void set_allocated_step(::PBFrameMessage* step);

  // @@protoc_insertion_point(class_scope:CSFrameSyncRequest)
 private:
  inline void set_has_step();
  inline void clear_has_step();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::PBFrameMessage* step_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_GamePlay_2eproto();
  friend void protobuf_AssignDesc_GamePlay_2eproto();
  friend void protobuf_ShutdownFile_GamePlay_2eproto();

  void InitAsDefaultInstance();
  static CSFrameSyncRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSFrameSyncResponse : public ::google::protobuf::Message {
 public:
  CSFrameSyncResponse();
  virtual ~CSFrameSyncResponse();

  CSFrameSyncResponse(const CSFrameSyncResponse& from);

  inline CSFrameSyncResponse& operator=(const CSFrameSyncResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSFrameSyncResponse& default_instance();

  void Swap(CSFrameSyncResponse* other);

  // implements Message ----------------------------------------------

  CSFrameSyncResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSFrameSyncResponse& from);
  void MergeFrom(const CSFrameSyncResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // repeated .PBFrameMessage steps = 2;
  inline int steps_size() const;
  inline void clear_steps();
  static const int kStepsFieldNumber = 2;
  inline const ::PBFrameMessage& steps(int index) const;
  inline ::PBFrameMessage* mutable_steps(int index);
  inline ::PBFrameMessage* add_steps();
  inline const ::google::protobuf::RepeatedPtrField< ::PBFrameMessage >&
      steps() const;
  inline ::google::protobuf::RepeatedPtrField< ::PBFrameMessage >*
      mutable_steps();

  // @@protoc_insertion_point(class_scope:CSFrameSyncResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::PBFrameMessage > steps_;
  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_GamePlay_2eproto();
  friend void protobuf_AssignDesc_GamePlay_2eproto();
  friend void protobuf_ShutdownFile_GamePlay_2eproto();

  void InitAsDefaultInstance();
  static CSFrameSyncResponse* default_instance_;
};
// -------------------------------------------------------------------

class CSBackRoomListRequest : public ::google::protobuf::Message {
 public:
  CSBackRoomListRequest();
  virtual ~CSBackRoomListRequest();

  CSBackRoomListRequest(const CSBackRoomListRequest& from);

  inline CSBackRoomListRequest& operator=(const CSBackRoomListRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSBackRoomListRequest& default_instance();

  void Swap(CSBackRoomListRequest* other);

  // implements Message ----------------------------------------------

  CSBackRoomListRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSBackRoomListRequest& from);
  void MergeFrom(const CSBackRoomListRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CSBackRoomListRequest)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;


  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[1];

  friend void  protobuf_AddDesc_GamePlay_2eproto();
  friend void protobuf_AssignDesc_GamePlay_2eproto();
  friend void protobuf_ShutdownFile_GamePlay_2eproto();

  void InitAsDefaultInstance();
  static CSBackRoomListRequest* default_instance_;
};
// -------------------------------------------------------------------

class CSBackRoomListResponse : public ::google::protobuf::Message {
 public:
  CSBackRoomListResponse();
  virtual ~CSBackRoomListResponse();

  CSBackRoomListResponse(const CSBackRoomListResponse& from);

  inline CSBackRoomListResponse& operator=(const CSBackRoomListResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CSBackRoomListResponse& default_instance();

  void Swap(CSBackRoomListResponse* other);

  // implements Message ----------------------------------------------

  CSBackRoomListResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSBackRoomListResponse& from);
  void MergeFrom(const CSBackRoomListResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::google::protobuf::int32 result() const;
  inline void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:CSBackRoomListResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_GamePlay_2eproto();
  friend void protobuf_AssignDesc_GamePlay_2eproto();
  friend void protobuf_ShutdownFile_GamePlay_2eproto();

  void InitAsDefaultInstance();
  static CSBackRoomListResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// PBFrameMessage

// optional int32 uin = 1;
inline bool PBFrameMessage::has_uin() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PBFrameMessage::set_has_uin() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PBFrameMessage::clear_has_uin() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PBFrameMessage::clear_uin() {
  uin_ = 0;
  clear_has_uin();
}
inline ::google::protobuf::int32 PBFrameMessage::uin() const {
  return uin_;
}
inline void PBFrameMessage::set_uin(::google::protobuf::int32 value) {
  set_has_uin();
  uin_ = value;
}

// optional string operation = 2;
inline bool PBFrameMessage::has_operation() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PBFrameMessage::set_has_operation() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PBFrameMessage::clear_has_operation() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PBFrameMessage::clear_operation() {
  if (operation_ != &::google::protobuf::internal::kEmptyString) {
    operation_->clear();
  }
  clear_has_operation();
}
inline const ::std::string& PBFrameMessage::operation() const {
  return *operation_;
}
inline void PBFrameMessage::set_operation(const ::std::string& value) {
  set_has_operation();
  if (operation_ == &::google::protobuf::internal::kEmptyString) {
    operation_ = new ::std::string;
  }
  operation_->assign(value);
}
inline void PBFrameMessage::set_operation(const char* value) {
  set_has_operation();
  if (operation_ == &::google::protobuf::internal::kEmptyString) {
    operation_ = new ::std::string;
  }
  operation_->assign(value);
}
inline void PBFrameMessage::set_operation(const char* value, size_t size) {
  set_has_operation();
  if (operation_ == &::google::protobuf::internal::kEmptyString) {
    operation_ = new ::std::string;
  }
  operation_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* PBFrameMessage::mutable_operation() {
  set_has_operation();
  if (operation_ == &::google::protobuf::internal::kEmptyString) {
    operation_ = new ::std::string;
  }
  return operation_;
}
inline ::std::string* PBFrameMessage::release_operation() {
  clear_has_operation();
  if (operation_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = operation_;
    operation_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void PBFrameMessage::set_allocated_operation(::std::string* operation) {
  if (operation_ != &::google::protobuf::internal::kEmptyString) {
    delete operation_;
  }
  if (operation) {
    set_has_operation();
    operation_ = operation;
  } else {
    clear_has_operation();
    operation_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// CSFrameSyncRequest

// optional .PBFrameMessage step = 1;
inline bool CSFrameSyncRequest::has_step() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSFrameSyncRequest::set_has_step() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSFrameSyncRequest::clear_has_step() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSFrameSyncRequest::clear_step() {
  if (step_ != NULL) step_->::PBFrameMessage::Clear();
  clear_has_step();
}
inline const ::PBFrameMessage& CSFrameSyncRequest::step() const {
  return step_ != NULL ? *step_ : *default_instance_->step_;
}
inline ::PBFrameMessage* CSFrameSyncRequest::mutable_step() {
  set_has_step();
  if (step_ == NULL) step_ = new ::PBFrameMessage;
  return step_;
}
inline ::PBFrameMessage* CSFrameSyncRequest::release_step() {
  clear_has_step();
  ::PBFrameMessage* temp = step_;
  step_ = NULL;
  return temp;
}
inline void CSFrameSyncRequest::set_allocated_step(::PBFrameMessage* step) {
  delete step_;
  step_ = step;
  if (step) {
    set_has_step();
  } else {
    clear_has_step();
  }
}

// -------------------------------------------------------------------

// CSFrameSyncResponse

// optional int32 result = 1;
inline bool CSFrameSyncResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSFrameSyncResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSFrameSyncResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSFrameSyncResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 CSFrameSyncResponse::result() const {
  return result_;
}
inline void CSFrameSyncResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}

// repeated .PBFrameMessage steps = 2;
inline int CSFrameSyncResponse::steps_size() const {
  return steps_.size();
}
inline void CSFrameSyncResponse::clear_steps() {
  steps_.Clear();
}
inline const ::PBFrameMessage& CSFrameSyncResponse::steps(int index) const {
  return steps_.Get(index);
}
inline ::PBFrameMessage* CSFrameSyncResponse::mutable_steps(int index) {
  return steps_.Mutable(index);
}
inline ::PBFrameMessage* CSFrameSyncResponse::add_steps() {
  return steps_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PBFrameMessage >&
CSFrameSyncResponse::steps() const {
  return steps_;
}
inline ::google::protobuf::RepeatedPtrField< ::PBFrameMessage >*
CSFrameSyncResponse::mutable_steps() {
  return &steps_;
}

// -------------------------------------------------------------------

// CSBackRoomListRequest

// -------------------------------------------------------------------

// CSBackRoomListResponse

// optional int32 result = 1;
inline bool CSBackRoomListResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSBackRoomListResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSBackRoomListResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSBackRoomListResponse::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::google::protobuf::int32 CSBackRoomListResponse::result() const {
  return result_;
}
inline void CSBackRoomListResponse::set_result(::google::protobuf::int32 value) {
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GamePlay_2eproto__INCLUDED
