// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Login.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* CSLoginRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CSLoginRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* CSLoginResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CSLoginResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Login_2eproto() {
  protobuf_AddDesc_Login_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Login.proto");
  GOOGLE_CHECK(file != NULL);
  CSLoginRequest_descriptor_ = file->message_type(0);
  static const int CSLoginRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginRequest, username_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginRequest, password_),
  };
  CSLoginRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CSLoginRequest_descriptor_,
      CSLoginRequest::default_instance_,
      CSLoginRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CSLoginRequest));
  CSLoginResponse_descriptor_ = file->message_type(1);
  static const int CSLoginResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginResponse, uin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginResponse, result_),
  };
  CSLoginResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CSLoginResponse_descriptor_,
      CSLoginResponse::default_instance_,
      CSLoginResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSLoginResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CSLoginResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Login_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CSLoginRequest_descriptor_, &CSLoginRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CSLoginResponse_descriptor_, &CSLoginResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Login_2eproto() {
  delete CSLoginRequest::default_instance_;
  delete CSLoginRequest_reflection_;
  delete CSLoginResponse::default_instance_;
  delete CSLoginResponse_reflection_;
}

void protobuf_AddDesc_Login_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013Login.proto\"4\n\016CSLoginRequest\022\020\n\010usern"
    "ame\030\001 \001(\t\022\020\n\010password\030\002 \001(\t\".\n\017CSLoginRe"
    "sponse\022\013\n\003uin\030\001 \001(\005\022\016\n\006result\030\002 \001(\005", 115);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Login.proto", &protobuf_RegisterTypes);
  CSLoginRequest::default_instance_ = new CSLoginRequest();
  CSLoginResponse::default_instance_ = new CSLoginResponse();
  CSLoginRequest::default_instance_->InitAsDefaultInstance();
  CSLoginResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Login_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Login_2eproto {
  StaticDescriptorInitializer_Login_2eproto() {
    protobuf_AddDesc_Login_2eproto();
  }
} static_descriptor_initializer_Login_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CSLoginRequest::kUsernameFieldNumber;
const int CSLoginRequest::kPasswordFieldNumber;
#endif  // !_MSC_VER

CSLoginRequest::CSLoginRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CSLoginRequest::InitAsDefaultInstance() {
}

CSLoginRequest::CSLoginRequest(const CSLoginRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CSLoginRequest::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  password_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSLoginRequest::~CSLoginRequest() {
  SharedDtor();
}

void CSLoginRequest::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (password_ != &::google::protobuf::internal::kEmptyString) {
    delete password_;
  }
  if (this != default_instance_) {
  }
}

void CSLoginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSLoginRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CSLoginRequest_descriptor_;
}

const CSLoginRequest& CSLoginRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

CSLoginRequest* CSLoginRequest::default_instance_ = NULL;

CSLoginRequest* CSLoginRequest::New() const {
  return new CSLoginRequest;
}

void CSLoginRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    if (has_password()) {
      if (password_ != &::google::protobuf::internal::kEmptyString) {
        password_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CSLoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string username = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->username().data(), this->username().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_password;
        break;
      }

      // optional string password = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_password:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->password().data(), this->password().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CSLoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->password(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CSLoginRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string username = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->username().data(), this->username().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // optional string password = 2;
  if (has_password()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->password().data(), this->password().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CSLoginRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string username = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }

    // optional string password = 2;
    if (has_password()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->password());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CSLoginRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CSLoginRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CSLoginRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CSLoginRequest::MergeFrom(const CSLoginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_password()) {
      set_password(from.password());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSLoginRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CSLoginRequest::CopyFrom(const CSLoginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CSLoginRequest::IsInitialized() const {

  return true;
}

void CSLoginRequest::Swap(CSLoginRequest* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(password_, other->password_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CSLoginRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CSLoginRequest_descriptor_;
  metadata.reflection = CSLoginRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CSLoginResponse::kUinFieldNumber;
const int CSLoginResponse::kResultFieldNumber;
#endif  // !_MSC_VER

CSLoginResponse::CSLoginResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CSLoginResponse::InitAsDefaultInstance() {
}

CSLoginResponse::CSLoginResponse(const CSLoginResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CSLoginResponse::SharedCtor() {
  _cached_size_ = 0;
  uin_ = 0;
  result_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSLoginResponse::~CSLoginResponse() {
  SharedDtor();
}

void CSLoginResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CSLoginResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSLoginResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CSLoginResponse_descriptor_;
}

const CSLoginResponse& CSLoginResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Login_2eproto();
  return *default_instance_;
}

CSLoginResponse* CSLoginResponse::default_instance_ = NULL;

CSLoginResponse* CSLoginResponse::New() const {
  return new CSLoginResponse;
}

void CSLoginResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uin_ = 0;
    result_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CSLoginResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 uin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &uin_)));
          set_has_uin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_result;
        break;
      }

      // optional int32 result = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CSLoginResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 uin = 1;
  if (has_uin()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->uin(), output);
  }

  // optional int32 result = 2;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CSLoginResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 uin = 1;
  if (has_uin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->uin(), target);
  }

  // optional int32 result = 2;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CSLoginResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 uin = 1;
    if (has_uin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->uin());
    }

    // optional int32 result = 2;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->result());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CSLoginResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CSLoginResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CSLoginResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CSLoginResponse::MergeFrom(const CSLoginResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uin()) {
      set_uin(from.uin());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSLoginResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CSLoginResponse::CopyFrom(const CSLoginResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CSLoginResponse::IsInitialized() const {

  return true;
}

void CSLoginResponse::Swap(CSLoginResponse* other) {
  if (other != this) {
    std::swap(uin_, other->uin_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CSLoginResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CSLoginResponse_descriptor_;
  metadata.reflection = CSLoginResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
