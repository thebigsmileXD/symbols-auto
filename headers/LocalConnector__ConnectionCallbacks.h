#pragma once

class LocalConnector::ConnectionCallbacks {

    virtual ~ConnectionCallbacks();
    virtual ~ConnectionCallbacks();
    virtual void onNewIncomingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onNewOutgoingConnection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>);
    virtual void onConnectionClosed(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onAllConnectionsClosed(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
}
