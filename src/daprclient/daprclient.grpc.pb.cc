// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: daprclient/daprclient.proto

#include "daprclient/daprclient.pb.h"
#include "daprclient/daprclient.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace daprclient {

static const char* DaprClient_method_names[] = {
  "/daprclient.DaprClient/OnInvoke",
  "/daprclient.DaprClient/GetTopicSubscriptions",
  "/daprclient.DaprClient/GetBindingsSubscriptions",
  "/daprclient.DaprClient/OnBindingEvent",
  "/daprclient.DaprClient/OnTopicEvent",
};

std::unique_ptr< DaprClient::Stub> DaprClient::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DaprClient::Stub> stub(new DaprClient::Stub(channel));
  return stub;
}

DaprClient::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_OnInvoke_(DaprClient_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTopicSubscriptions_(DaprClient_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetBindingsSubscriptions_(DaprClient_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_OnBindingEvent_(DaprClient_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_OnTopicEvent_(DaprClient_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DaprClient::Stub::OnInvoke(::grpc::ClientContext* context, const ::daprclient::InvokeEnvelope& request, ::google::protobuf::Any* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnInvoke_, context, request, response);
}

void DaprClient::Stub::experimental_async::OnInvoke(::grpc::ClientContext* context, const ::daprclient::InvokeEnvelope* request, ::google::protobuf::Any* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnInvoke_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Any>* DaprClient::Stub::AsyncOnInvokeRaw(::grpc::ClientContext* context, const ::daprclient::InvokeEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Any>::Create(channel_.get(), cq, rpcmethod_OnInvoke_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Any>* DaprClient::Stub::PrepareAsyncOnInvokeRaw(::grpc::ClientContext* context, const ::daprclient::InvokeEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Any>::Create(channel_.get(), cq, rpcmethod_OnInvoke_, context, request, false);
}

::grpc::Status DaprClient::Stub::GetTopicSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::daprclient::GetTopicSubscriptionsEnvelope* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetTopicSubscriptions_, context, request, response);
}

void DaprClient::Stub::experimental_async::GetTopicSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::daprclient::GetTopicSubscriptionsEnvelope* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetTopicSubscriptions_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::daprclient::GetTopicSubscriptionsEnvelope>* DaprClient::Stub::AsyncGetTopicSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::GetTopicSubscriptionsEnvelope>::Create(channel_.get(), cq, rpcmethod_GetTopicSubscriptions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::daprclient::GetTopicSubscriptionsEnvelope>* DaprClient::Stub::PrepareAsyncGetTopicSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::GetTopicSubscriptionsEnvelope>::Create(channel_.get(), cq, rpcmethod_GetTopicSubscriptions_, context, request, false);
}

::grpc::Status DaprClient::Stub::GetBindingsSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::daprclient::GetBindingsSubscriptionsEnvelope* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetBindingsSubscriptions_, context, request, response);
}

void DaprClient::Stub::experimental_async::GetBindingsSubscriptions(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::daprclient::GetBindingsSubscriptionsEnvelope* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetBindingsSubscriptions_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::daprclient::GetBindingsSubscriptionsEnvelope>* DaprClient::Stub::AsyncGetBindingsSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::GetBindingsSubscriptionsEnvelope>::Create(channel_.get(), cq, rpcmethod_GetBindingsSubscriptions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::daprclient::GetBindingsSubscriptionsEnvelope>* DaprClient::Stub::PrepareAsyncGetBindingsSubscriptionsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::GetBindingsSubscriptionsEnvelope>::Create(channel_.get(), cq, rpcmethod_GetBindingsSubscriptions_, context, request, false);
}

::grpc::Status DaprClient::Stub::OnBindingEvent(::grpc::ClientContext* context, const ::daprclient::BindingEventEnvelope& request, ::daprclient::BindingResponseEnvelope* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnBindingEvent_, context, request, response);
}

void DaprClient::Stub::experimental_async::OnBindingEvent(::grpc::ClientContext* context, const ::daprclient::BindingEventEnvelope* request, ::daprclient::BindingResponseEnvelope* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnBindingEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::daprclient::BindingResponseEnvelope>* DaprClient::Stub::AsyncOnBindingEventRaw(::grpc::ClientContext* context, const ::daprclient::BindingEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::BindingResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_OnBindingEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::daprclient::BindingResponseEnvelope>* DaprClient::Stub::PrepareAsyncOnBindingEventRaw(::grpc::ClientContext* context, const ::daprclient::BindingEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::daprclient::BindingResponseEnvelope>::Create(channel_.get(), cq, rpcmethod_OnBindingEvent_, context, request, false);
}

::grpc::Status DaprClient::Stub::OnTopicEvent(::grpc::ClientContext* context, const ::daprclient::CloudEventEnvelope& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_OnTopicEvent_, context, request, response);
}

void DaprClient::Stub::experimental_async::OnTopicEvent(::grpc::ClientContext* context, const ::daprclient::CloudEventEnvelope* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  return ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_OnTopicEvent_, context, request, response, std::move(f));
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* DaprClient::Stub::AsyncOnTopicEventRaw(::grpc::ClientContext* context, const ::daprclient::CloudEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_OnTopicEvent_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* DaprClient::Stub::PrepareAsyncOnTopicEventRaw(::grpc::ClientContext* context, const ::daprclient::CloudEventEnvelope& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_OnTopicEvent_, context, request, false);
}

DaprClient::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DaprClient_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DaprClient::Service, ::daprclient::InvokeEnvelope, ::google::protobuf::Any>(
          std::mem_fn(&DaprClient::Service::OnInvoke), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DaprClient_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DaprClient::Service, ::google::protobuf::Empty, ::daprclient::GetTopicSubscriptionsEnvelope>(
          std::mem_fn(&DaprClient::Service::GetTopicSubscriptions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DaprClient_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DaprClient::Service, ::google::protobuf::Empty, ::daprclient::GetBindingsSubscriptionsEnvelope>(
          std::mem_fn(&DaprClient::Service::GetBindingsSubscriptions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DaprClient_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DaprClient::Service, ::daprclient::BindingEventEnvelope, ::daprclient::BindingResponseEnvelope>(
          std::mem_fn(&DaprClient::Service::OnBindingEvent), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DaprClient_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DaprClient::Service, ::daprclient::CloudEventEnvelope, ::google::protobuf::Empty>(
          std::mem_fn(&DaprClient::Service::OnTopicEvent), this)));
}

DaprClient::Service::~Service() {
}

::grpc::Status DaprClient::Service::OnInvoke(::grpc::ServerContext* context, const ::daprclient::InvokeEnvelope* request, ::google::protobuf::Any* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DaprClient::Service::GetTopicSubscriptions(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::daprclient::GetTopicSubscriptionsEnvelope* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DaprClient::Service::GetBindingsSubscriptions(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::daprclient::GetBindingsSubscriptionsEnvelope* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DaprClient::Service::OnBindingEvent(::grpc::ServerContext* context, const ::daprclient::BindingEventEnvelope* request, ::daprclient::BindingResponseEnvelope* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status DaprClient::Service::OnTopicEvent(::grpc::ServerContext* context, const ::daprclient::CloudEventEnvelope* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace daprclient

